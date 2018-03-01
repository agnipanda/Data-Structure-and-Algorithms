#include <stdio.h>

void quicksort(int arr[],int start,int end)
{
	// printf("Start=%d\n",start );
	// printf("End=%d\n",end );
	if (start>=end)
	{
		return;
	}
	int i,pivot=arr[end],c=start,temp;
	for(i=start;i<end;i++)
	{
		if (arr[i]<pivot)
		{
			temp=arr[i];
			arr[i]=arr[c];
			arr[c]=temp;
			c++;
		}
	}
	arr[end]=arr[c];
	arr[c]=pivot;
	// printf("c=%d\n",c);
	// printArray(arr,0,5);
	quicksort(arr,start,c-1);
	quicksort(arr,c+1,end);
}
void printArray(int arr[],int start,int end)
{
	int i;
	for(i=start;i<end;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int main()
{
	int i,arr[100],n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printArray(arr,0,n);
	return 0;
}