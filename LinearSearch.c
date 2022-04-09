#include<stdio.h>

int LinearSearch(int arr[],int x,int k) // Linear Search Function.
{
	int i;
	for(i=0;i<x;i++)
	{
		if(arr[i]==k) // returns value of i and stops execution where required condition met.
		{
			return i;
		}
	}
	 return -1;
}

void main()
{
	int a[100],i,n,key;
	printf("Enter the number of elements to search : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter element %d : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter the element to search : ");
	scanf("%d",&key);
	
	if(LinearSearch(a,n,key)==-1)
	{
		printf("%d is not found in the given array.",key);
	}  
	else
	{
		printf("The given element %d is present at %d",key,LinearSearch(a,n,key));// calling LinearSearch function.
	}
	   
}
