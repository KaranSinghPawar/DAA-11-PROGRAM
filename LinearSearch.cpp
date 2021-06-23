#include<stdio.h>
void linearSearch(int arr[],int n,int key)
{
	int KP=1,i;
	for(i=0;i<=n-1;i++){
		if(arr[i]==key){
			KP=0;
			printf("element found successful");
		}
	}
	if(KP==1){
		printf("element found unsuccessful");
	}
}

int main()
{
	int arr1[]={10,45,78,56,44,11,65,22,33,48,61,14,13,12};
	linearSearch(arr1,14,44);
}
