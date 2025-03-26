/* WAP in C to store factorial of array in another array.
              i/p:  int a[4]={ 4, 5,  6, 4};
           o/p:  int b[4]={24,120,720,24}*/
#include<stdio.h>
void main(){
	int n,i,j,fact;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=1,fact=1;j<=a[i];j++){
			fact=fact*j;
		}
		b[i]=fact;
	}
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	printf("\n");
}
