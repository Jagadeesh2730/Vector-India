/*4.WAP in C to find sum of all array elements.
         i/p:  int a[5]={10,20,30,40,50};
        o/p:     150  */
#include<stdio.h>
void main(){
	int n,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
		sum+=a[i];
	}
	printf("\nsum=%d\n",sum);
}
