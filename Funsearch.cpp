#include<stdio.h>

int strf(char* str1,char* str2);

int strf(char* str1,char* str2)
{
	int flag=0;
	int j=0;
	for(int i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[j])
		flag=1;
	}
	return flag;
}
int main ()
{
	char str1[10],str2[2];
	
	printf("enter a string: ");
	scanf("%s",str1);
	printf ("enter a letter you need to find: ");
	scanf("%s",str2);
	int value=strf(str1,str2);
	if (value==1)
	printf("letter is FOUND");
	else
	printf("letter is not found");
}
