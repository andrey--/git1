Action()
{
//	int p, j, iterMax, len;
//char par[10], requestBody[1000], reqName[50],reqStatus[10], reqType[10];//, backUp[100], backUp2[100];
//	char *des;
//jhkhkjchar *backUp;
//	char *backUp2;
//	des=(char *)malloc(300 * sizeof(char));
//	backUp=(char *)malloc(100 * sizeof(char));
//	backUp2=(char *)malloc(100 * sizeof(char));
//	
//new one	
lr_start_transaction("Cookies");

	web_custom_request("Get_new_cookies)",
		"URL=http://{ServerName}/qcbin/rest/site-session",
		"Method=GET",
		"Resource=0",
		"Referer=",
		"Mode=HTML",
		"EncType=application/xml"
		 //"Body=<session-parameters><client-type>REST Client</client-type></session-parameters>"
	   	,LAST);
	   	lr_end_transaction("Cookies", LR_AUTO);


//
//	web_reg_save_param("req_id",
//	"LB=<Field Name=\"id\"><Value>",
//	"RB=</Value>"
//	"",
//	LAST);
//p=atoi (lr_eval_string("{parID}"));
//iterMax=atoi (lr_eval_string("{forMax}"));
//p=p%20+1;
//
//strcpy (reqName, lr_eval_string("{reqName}"));
//strcpy (reqStatus, lr_eval_string("{reqStatus}"));
//strcpy (reqType, lr_eval_string("{reqType}"));
//strcpy (backUp, "");
//strcpy (des, "");
//itoa (p, par, 10);
////lr_message(par);
//
//
//strcpy(requestBody, "Body=\n"); 
//strcat(requestBody, "<Entity Type=\"requirement\">\n");
//strcat(requestBody, "<Fields>\n");
//strcat(requestBody, "     <Field Name=\"name\">\n");
//strcat(requestBody, "          <Value>");
//strcat(requestBody, reqName);
//strcat(requestBody, "</Value>\n");
//strcat(requestBody, "     </Field>\n");
//strcat(requestBody, "     <Field Name=\"type-id\">\n");
//strcat(requestBody, "          <Value>");
//strcat(requestBody, reqType);
//strcat(requestBody, "</Value>\n");
//strcat(requestBody, "     </Field>\n");
//strcat(requestBody, "     <Field Name=\"owner\">\n");
//strcat(requestBody, "          <Value>admin</Value>\n");
//strcat(requestBody, "     </Field>\n");
//strcat(requestBody, "     <Field Name=\"parent-id\">\n");
//strcat(requestBody, "          <Value>");
//strcat(requestBody, par);
//strcat(requestBody, "</Value>\n");
//strcat(requestBody, "     </Field>\n");
//strcat(requestBody, "     <Field Name=\"description\">\n");
//strcat(requestBody, "          <Value>");
////for (j=0;j<=iterMax;j++){
//	strcpy (des, lr_eval_string("{reqDes}"));
//	strcat(requestBody, des);
//	strcat(requestBody, " ");
////	if (j%5==0){
//		strcat(backUp, des);
//		strcat(backUp, " ");
////	}
//	
////}
//strcat(requestBody, "</Value>\n");
//strcat(requestBody, "     </Field>\n");    
//strcat(requestBody, "</Fields>\n");
//strcat(requestBody, "</Entity>\n");
//
////len=strlen(backUp);
////strncpy(backUp2, backUp, len-1);
//lr_save_string(requestBody,"requestBody");
//
//lr_start_transaction ("req_create");    
//	web_custom_request("send",
//		"URL=http://{ServerName}/qcbin/rest/domains/DEFAULT/projects/{Project}/requirements?&alt=application/xml",
//		"Method=POST",
//		"Resource=0",
//		"Referer=",
//		"Mode=HTML",
//		"EncType=application/xml",
//		"{requestBody}"
//		,LAST);
//
//
//
//lr_end_transaction ("req_create", LR_AUTO);
//
//lr_think_time(1);
//
//lr_start_transaction ("req_get");    
//	web_custom_request("send",
//		"URL=http://{ServerName}/qcbin/rest/domains/DEFAULT/projects/{Project}/requirements/{req_id}",
//		"Method=GET",
//		"Resource=0",
//		"Referer=",
//		"Mode=HTML",
//		"EncType=application/xml",
//		"Body="
//		,LAST);
//		
//lr_end_transaction ("req_get", LR_AUTO);
lr_think_time(10);
//
//lr_save_string(backUp,"b");
//
//lr_start_transaction ("req_SOLR"); 
//web_custom_request("send",
//		"URL=http://{ServerName}/qcbin/rest/domains/DEFAULT/projects/{Project}/requirements/?query={description['{b}']}&fields=id,description",
//		"Method=GET",
//		"Resource=0",
//		"Referer=",
//		"Mode=HTML",
//		"EncType=application/xml",
//		"Body="
//		,LAST);
//lr_end_transaction ("req_SOLR", LR_AUTO);
//free(des);
//free(backUp);
//free(backUp2);


return 0;
}
