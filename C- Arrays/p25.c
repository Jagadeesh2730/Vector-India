/*25.WAP in C to delete 2nd index element from array
  i/p:  int  a[5]={99,88,77,66,55}, pos=2;
       o/p:   int a[5]={99,88,66,55};  */
#include<stdio.h>
void main(){
	int n,pos;
	printf("Enter the values of n and pos:");
	scanf("%d %d",&n,&pos);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=pos;i<n-1;i++)
		arr[i]=arr[i+1];
	for(int i=0;i<n-1;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
