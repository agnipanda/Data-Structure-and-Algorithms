#include <stdio.h>
int main()
{
	int n,arr[100],i,j,a;
	printf("Enter the size of the array to be bubble sorted:");
	scanf("%d",&n);
	printf("Enter the elements of the array to be bubble sorted:");
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				a=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=a;
			}
		}
	}
	for (i = 0; i < n; ++i)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}