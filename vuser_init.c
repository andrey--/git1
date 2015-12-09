vuser_init() {
	
	SetAttributes();
	
    SelectProject();
    SelectUser();
    
//    TransLandingPage();
//    TransAuthentication();
//    TransLogin();
    
//    web_reg_save_param("LwssoCookieKey",
//		"LB=LWSSO_COOKIE_KEY=",
//		"RB=;",
//		"Search=Headers",
//		LAST);
	
    web_custom_request("send",
		"URL=http://{ServerName}/qcbin/authentication-point/alm-authenticate",
		"Method=POST",
		"Resource=0",
		"Referer=",
		"Mode=HTML",
		"EncType=application/xml",
		"Body=<alm-authentication> <user>{UserName}</user><password/></alm-authentication>"
	   	,LAST);
    
//web_reg_save_param("XSRFTOKEN",
//		"LB=XSRF-TOKEN=",
//		"RB=;",
//		"Search=Headers",
//		LAST);
//	
//
//	
//	web_add_auto_header("X-XSRF-TOKEN", "{XSRFTOKEN}");       

    web_custom_request("send",
		"URL=http://{ServerName}/qcbin/rest/site-session",
		"Method=POST",
		"Resource=0",
		"Referer=",
		"Mode=HTML",
		"EncType=application/xml",
		"Body=<session-parameters><client-type>REST Client</client-type></session-parameters>"
	   	,LAST);


    
    return 0;

}
