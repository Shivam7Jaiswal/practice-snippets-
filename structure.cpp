#include<stdio.h>
typedef struct student 
	{
		int rollno;
		char name[10];
	}student;
	
  student store()
	{
		student temp;
	scanf("%d",&temp.rollno);
	scanf("%s",temp.name);
	return temp;
	}
	
	
	void display(student temp)
	{
		printf("%d and %s\n",temp.rollno,temp.name);
	}
	

	
int main()
{
	 student s1,s2,s3;
	
	printf("enter student Details roll no. and name:\n ");
  	s1=store();
	
	printf("enter student Details roll no. and name:\n ");
  	s2=store();
  	
  	printf("enter student Details roll no. and name\n: ");
  	s3=store();
	
	display(s1);
	display(s2);
	display(s3);
	
	

}

