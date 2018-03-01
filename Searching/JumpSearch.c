#include <stdio.h>

int main()
{
	int i,arr[100],n,sqr,ele,j;
	printf("\nEnter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be searched:");
	scanf("%d",&ele);
	sqr=n^(1/2);
	for(i=0;i<n;i+=sqr)
	{
		if (arr[i]>=ele)
		{
			break;
		}
	}
	for(j=i;j>i-sqr;j--)
	{
		if (arr[j]==ele)
		{
			printf("\nThe element %d is at position %d...!!\n",ele,j+1);
			return 0;
		}
	}
	printf("\nEntered element is not present in the array...!!\n");
}