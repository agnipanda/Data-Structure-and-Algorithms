#include <stdio.h>

void mergeSort(int arr[],int n)
{
	if (n>=2)
	{
		int leftlen,rightlen,mid,i=0,j=0,k=0;
		mid=n/2;
		leftlen=mid;
		rightlen=n-mid;
		int L[leftlen],R[rightlen];
		for (i = 0; i < leftlen; ++i)
		{
			L[i]=arr[i];
		}
		for (i = 0; i < rightlen; ++i)
		{
			R[i]=arr[i+leftlen];
		}
		mergeSort(L,leftlen);
		mergeSort(R,rightlen);
		i=0;
		while(i<leftlen && j<rightlen)
		{
			if (L[i]<R[j])
			{
				arr[k]=L[i];
				i++;
			}
			if (R[j]<L[i])
			{
				arr[k]=R[j];
				j++;
			}
			k++;
		}
		while(i<leftlen)
		{
			arr[k]=L[i];
			i++;
			k++;
		}
		while(j<rightlen)
		{
			arr[k]=R[j];
			j++;
			k++;
		}
	}
}
void printArray(int arr[],int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[100],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements of the array:");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	mergeSort(arr,n);
	printArray(arr,n);
}