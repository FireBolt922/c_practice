// find positon of charactr in string

#include<stdio.h>
#include<math.h>
#include<string.h>

void main()
{
	char s[100];
	printf("Enter the string :- \n");
	scanf("%s",s);
	char *n = strchr(s,'g');
	printf("Character c is found at position :- \n");
	printf("\n %ld \n", n-s+1);
	return;
}

