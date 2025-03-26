/*WAP in C to replace prime index ele with 0 in array.
     i/p:  int a[8]={11,22,33,44,55,66,77,88};
    o/p:  int a[8]={11,22,0 ,0 ,55,0 ,77,0 };*/
#include<stdio.h>
void main(){
	int n,i,j;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		for(j=2;j<i;j++){
			if(i%j==0)
				break;
		}
		if(i==j){
			arr[i]=0;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
