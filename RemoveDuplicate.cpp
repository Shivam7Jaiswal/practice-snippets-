#include <stdio.h>
int main()
{

	int size;
	
	printf("enter a size of array: ");
	scanf("%d",&size);
	int arr[size];
	
	printf("enter value in the array: ");
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			arr[j]='@';
			
		}
	}
	printf("The array after removing duplicate value will be: ");
	for(int i=0;i<size;i++)
	{
		if(arr[i]!='@')
		printf(" %d",arr[i]);	
	}
	

}