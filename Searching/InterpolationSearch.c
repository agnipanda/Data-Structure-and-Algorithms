#include <stdio.h>

int main()
{
	int i,arr[100],ele,n,pos,start,end;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be searched:\n");
	scanf("%d",&ele);
	start=0;
	end=n-1;
	while(start<=end && arr[start]<=ele && arr[end]>=ele)
	{
		pos=start+(((double)(end-start)/(arr[end]-arr[start]))*(ele-arr[start]));
		if (arr[pos]==ele)
		{
			printf("The element %d is at position %d...!!\n",ele,pos+1);
			return 0;
		}
		if (ele<arr[pos])
		{
			end=pos-1;
		}
		else
		{
			start=pos+1;
		}
	}
	printf("\nEntered element is not present in the array...!!\n");
}