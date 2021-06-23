#include<stdio.h>
void InsertionSort(int arr[],int n);
int main()
{
	int i;
	int arr[]={24,45,12,44,88,55,11,10};
	InsertionSort(arr,8);
	for(i=0;i<=7;i++)
        printf(" %d",arr[i]);
}

void InsertionSort(int arr[],int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0&&temp<arr[j];j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
}
