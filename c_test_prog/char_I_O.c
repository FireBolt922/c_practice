#include<stdio.h>
#include<math.h>

void reverse();
void main()
{
	int c;
	c = getchar();
	while (c!=EOF)
	{
		putchar(c);
		c = getchar();
		printf("%d", c);
	}
	return 0;
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
