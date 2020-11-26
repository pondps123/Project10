#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int upper = 0, lower = 0, digit = 0;
void Count(char *str) {
	char* p;
	p = str;
	while (*p != '\0')
	{
		if (*p >= 65 && *p <= 90) {
			upper++;
		}
		else if (*p >= 97 && *p <= 122) {
			lower++;
		}
		else if (*p >= 48 && *p <= 57) {
			digit++;
		}
		p++;
	}
}
int main()
{
	char str1[128], *p;
	scanf("%[^\n]", str1);
	Count(str1);
	printf("Uppercase = %d, Lowercase = %d, Number = %d", upper, lower, digit);
	return 0;
}