#include <stdio.h>

int main()
{
	int arr[100],i,n,ele,flag=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if (arr[i]==ele)
		{
			printf("The element %d is at position %d...!!\n",ele,i+1);
			flag=1;
		}
	}
	if (flag==0)
	{
		printf("Entered element is not present in the array...!!\n");
	}
}