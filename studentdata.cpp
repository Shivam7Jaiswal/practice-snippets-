#include<stdio.h>
typedef struct student
{
	int rollno,marks;
	char name[100];
}student;

int store(student* s1,int start)
{
	int size;
	printf("enter the number of student you want to enter: ");
	scanf("%d",&size);
	for(int i=start;i < start+size;i++)
	{
		printf("enter student rollno: ");
		scanf("%d",&s1[i].rollno);
		printf("enter student marks: ");
		scanf("%d",&s1[i].marks);
		printf("enter student name: ");
		scanf("%s",s1[i].name);
		
	}
	return size;
}

void display(student* s1,int size)
{
	for(int i=0;i<size;i++)
	printf("rollno=%d marks=%d name=%s\n",s1[i].rollno,s1[i].marks,s1[i].name);
}

void search(student* s1,int size)
{
	int rn,m=0;
	printf("enter the student rollno: ");
	scanf("%d",&rn);
	for(int i=0;i<size;i++)
	{
		if(rn==s1[i].rollno)
		{
	  		printf("student found\n name=%s marks=%d rollno=%d\n",s1[i].name,s1[i].marks,s1[i].rollno);
		break;
		}
		else
		   m=1;
    }
    if(m==1)
    printf("not found\n");
}

int remove(student* s1,int size)
{
	int rn,m=0;
	printf("enter roll no. of the student: ");
	scanf("%d",&rn);
	
	for(int i=0;i<size;i++)
	{
		if(rn==s1[i].rollno)
	{
			m=1;
	for(int j=i+1;j < size;j++)
	{
		s1[j]=s1[i];
	
	}
	size--;
	printf("the student data has been deleted\n");
	break;
    }
	}
	  if(m==0)
    printf("not found\n");
    
    return size;
}


int main()
{
	student s1[100];
	int total=0;
	
	
	total=store(s1,total);
	
while (1)
{
		
		int choice;
		printf("choose\n 1 to insert new student data\n 2 to display\n 3 to search student from Rollno\n 4 to delete student data\n 5 exit\n");	
		scanf("%d",&choice);

	if (choice==1)
	{   
		total +=store(s1,total);	
	}
	else if (choice==2)
  		display(s1,total);
  	
  	else if(choice==3)
  	search(s1,total);
  	
  	else if(choice==4)
  	total=remove(s1,total);
  	
  	else if(choice==5)
  	break;
  	 		
}
}