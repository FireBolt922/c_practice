#include<stdio.h>
#include<math.h>

void reverse();
void main()
{
	char storage[] = "dataStoredHere 27";
	char name[30];
	int age;
	sscanf(storage,"%s \n %d",name,&age);
	printf("Name: %s \nAge: %d",name,age);
	return;
}

void reverse()
{
	char word;
	scanf("%c", &word);
	if(word != '\n')
	{
		reverse();
		printf("%c", word);
	}
	
}
