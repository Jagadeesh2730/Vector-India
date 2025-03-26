/*WAP in C to store prime index ele in another array.
       i/p:  int a[8]={11,22,33,44,55,66,77,88};
      o/p:  int b[8]={33,44,66,88};*/
#include<stdio.h>
void main(){
	int n,i,j,count=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n],b[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=2;j<i;j++){
			if(i%j==0)
				break;
		}
		if(i==j){
			b[count++]=a[i];
		}
	}
	for(i=0;i<n-count;i++)
		printf("%d ",b[i]);
	printf("\n");
}
