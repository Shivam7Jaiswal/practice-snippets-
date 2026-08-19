#include <stdio.h>
int mstrcmp(char* str1,char* str2);

int mstrcmp(char* str1,char* str2)
	{
		int i=0;
		
		while (str1[i] != '\0' && str2[i] != '\0')
		{
			if(str1[i]!=str2[i])
			return str1[i]-str2[i];
			i++;	
		}  
			return str1[i]-str2[i];
	}
	
	int main()
	{
		char str1[10];
		char str2[10];
		
		printf ("enter first string: ");
		scanf("%s",str1);
		printf ("enter second string: ");
		scanf("%s",str2);
		
	int value=mstrcmp(str1,str2);
	
	if (value==0)
	printf("string is same");
	
	else
	printf("string is not same");
		
	}