/* 24. WAP in C to delete 0th index element from array
   i/p:  int  a[5]={99,88,77,66,55}, in=0;
       o/p:   int a[5]={88,77,66,55};  */
#include<stdio.h>
void main(){
	int n,in;
	printf("Enter the values of n and in:");
	scanf("%d %d",&n,&in);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=in;i<n-1;i++)
		arr[i]=arr[i+1];
	for(int i=0;i<n-1;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
