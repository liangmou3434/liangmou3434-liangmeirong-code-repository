#define _CRT_SECURE_NO_WARNINGS 1
int judge_Leap_Years(int Year)
{
	if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
		return 1;
	else
		return 0;
}
	
