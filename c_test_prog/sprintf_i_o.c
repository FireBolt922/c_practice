#include<stdio.h>
#include<math.h>

void reverse();
void main()
{
	char *store[50];
	char name[100] = "This is sprintf() function ";
	sprintf(store, "pointer store locate to string : %s \n", name);
	puts(store);
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
