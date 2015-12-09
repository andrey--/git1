vuser_end()
{
	lr_start_transaction ("Logout");  
		web_custom_request("rest",
		"URL=http://{ServerName}/qcbin/authentication-point/logout",
		"Method=GET",
		"Resource=0",
		"Referer=",
		"Mode=HTML",
		"EncType=application/xml",
		"Body="
		,LAST);

       lr_end_transaction ("Logout", LR_AUTO);  

	return 0;
}
