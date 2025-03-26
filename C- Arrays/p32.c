/*32.WAP in C to product of digit of all array elements.
       i/p:  int a[5]={11,202,234,456,90};
       o/p:  int a[5]={1,  0, 24, 120, 0};*/
#include<stdio.h>
void main(){
	int n,mul,temp;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++){
		for(temp=arr[i],mul=1;temp;temp/=10){
			mul=mul*(temp%10);
		}
		arr[i]=mul;
	}
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
