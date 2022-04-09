#include<stdio.h>

int BinarySearch(int arr[],int k,int search) // function to Binary Search
{
	int s=0,e=k,mid; //'s' stands for starting element index and 'e' stands for ending element index.
	while(s<=e)
	{
		mid = (s+e)/2;
		if(arr[mid]==search)
		{
			return mid;
		}
		else if(arr[mid]<search)
		{
			s = mid+1;
		}
		else
		{
			e = mid-1;
		}
	}
	return -1;
}

void main()
{
	int a[100],n,i,find;
	printf("\n\tEnter the number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) //entering elements to the array.
	{
		printf("\n\tEnter Element %d : ",i);
		scanf("%d",&a[i]); //note that the elements to be inserted in ascending order.
	}
	
	printf("\n\tEnter element to search : ");
	scanf("%d",&find);
	
	if(BinarySearch(a,n,find)==-1)
	{
		printf("\n\tThe element is not Found.");
	}
	else
	{
		printf("\n\tThe element is found at position %d.",BinarySearch(a,n,find));//calling BinarySearch function
	}
	
}
