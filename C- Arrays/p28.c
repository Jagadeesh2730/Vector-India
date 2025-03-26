/*28. WAP in C  to delete  -ve elements from array .
    i/p:   int a[6]={-11,12,-14,13,-15,-18};
    o/p:   int a[6]={12, 13};*/
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			for(int j=i;j<n-1;j++){
				arr[j]=arr[j+1];
			}
			i--;
			n--;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
