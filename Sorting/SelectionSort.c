#include <stdio.h>
int main()
{
	int n,arr[100],i,j,a,min;
	printf("Enter the size of the array to be selection sorted:");
	scanf("%d",&n);
	printf("Enter the elements of the array to be selection sorted:");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		min=i;
		for (j = i; j < n; j++)
		{
			if (arr[j]<arr[min])
			{
				min=j;
			}
		}
		a=arr[i];
		arr[i]=arr[min];
		arr[min]=a;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}