#include <stdio.h>
int main()
{
	int n,arr[100],i,j,a,mid,l,r;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched:");
	scanf("%d",&a);
	mid=(n-1)/2;
	l=0;
	r=n-1;
	while(arr[mid]!=a)
	{
		if(r>=l)
		{
			if (arr[mid]>a)
			{
				r=mid-1;
			}
			if (arr[mid]<a)
			{
				l=mid+1;
			}
		}
		else
		{
			printf("Element entered in not present in the array..!!\n");
			return 0;
		}
		mid=l+(r-l)/2;
	}
	printf("position=%d\n",mid+1);
	return 0;
}