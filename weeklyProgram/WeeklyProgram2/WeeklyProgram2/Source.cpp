#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX_VALUE 100

int main()
{
	int i;
	char word[MAX_VALUE];

	printf("Enter word : ");
	gets_s(word);
	printf("Reverse of your word is ");
	
		for (int x=strlen(word)-1; x >= 0; x--)
		{
			printf("%c", word[x]);
		}
	


	return 0;
}