#include <stdio.h>
void strc(char* ptr,char* ptr1);
int main()
{
	char str1[10];
	char str2[10];
	
	
	printf("enter a string: ");
	scanf("%s",str1);
	
	 strc(str2,str1);
	
				
	printf("'%s' this is the copied string",str2);

}


 void strc(char* ptr , char* ptr1)
 {
 	int i=0;
 	while(ptr1[i] != '\0') 
	{
		ptr[i]=ptr1[i];
		i++;
	}
	
	ptr[i]= '\0' ;
 }