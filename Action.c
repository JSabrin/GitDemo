Action()
{
	//This is first Load Runner Git commit
	web_custom_request("web_custom_request",
		"URL=http://www.example.com",
		"Method=GET",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		"Body=",
		LAST);

	
	return 0;
}
