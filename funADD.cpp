#include<stdio.h>
void strcon(char* dest,char* src);

void strcon(char* dest,char* src)
	{
		int i=0;
		int j=0;
		
			while(dest[i]!='\0')
			i++;
			
				while(src[j]!='\0')
				{
					dest[i]=src[j];
					i++;
					j++;
				}
					dest[i]='\0';
	}
	
int main()
	{
		char str1[20];
		char str2[10];
		
		printf("enter a string: ");
		scanf("%s",str1);
		printf("enter a string to add in first string: ");
		scanf("%s",str2);
		
		strcon (str1,str2);
		printf ("the generated string is %s",str1);
	}
