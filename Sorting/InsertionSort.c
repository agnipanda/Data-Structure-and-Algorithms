#include <stdio.h>

int main()
{
	int i,j,arr[100],temp,n;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		j=i;
		while(j>0 && arr[j]<arr[j-1])
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}