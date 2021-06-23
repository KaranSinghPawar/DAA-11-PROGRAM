#include<stdio.h>
void Binarysearch(int arr[],int n,int item);
int main()
{
	int KP[]={11,22,33,44,55,78,79,80,84,85};
	int item=80;
	Binarysearch(KP,10,item);
}
void Binarysearch(int arr[],int n,int item)
{
	int l=0,r=n-1,m;
	while (l<=r)
	{
		int m=(l+r)/2;
		if(item==arr[m])
		{
			printf("element found successfully in index nuber:%d",m);
			return ;
		}
		else if(item>arr[m])
		{
			l=m+1;
		}
		else
		{
			r=m-1;
		}
	}
	printf("element found unsuccessful");
}
