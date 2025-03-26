/*3.WAP in C to sort 1st 4 ele of array in decending .
     i/p:  int a[7]={5,3,1,2,1,9,6};
    o/p:     5  3  2  1  1  9  6  */
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n],temp;
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<4-1;i++){
		for(int j=0;j<4-1-i;j++){
			if(a[j]<a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
			
		
