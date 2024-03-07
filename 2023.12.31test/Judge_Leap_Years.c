#define _CRT_SECURE_NO_WARNINGS 1
int judge_Leap_Years(int Years)
{
	if ((Years % 4 == 0 && Years % 100 != 0) || (Years % 400 == 0))
		return 1;
	else
		return 0;
}
	
