/*8.WAP in C to delete 0th bit  of all array elements.
         i/p:  int a[5]={12,10,35,63,512};
        o/p:  int a[5]={ 6, 5,17,31,256};*/
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
		printf("%d ",a[i]>>1);
	printf("\n");
}
