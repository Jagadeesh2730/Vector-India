/*23. WAP in C to merge 2 array into 3rd array .
 i/p: int a[2]={1,5}; b[4]={11,22,33,44};
      o/p:  int c[6]={1,11,5,22,33,44};*/
#include<stdio.h>
void main(){
	int n1,n2,i,j,k;
	printf("Enter the values of n1:");
	scanf("%d",&n1);
	int a[n1];
	printf("Enter the 1st array elements:");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	printf("Enter the values of n2:");
	scanf("%d",&n2);
	int b[n2];
	printf("Enter the 2nd array elements:");
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
	int c[n1+n2];
	//Using for loop
	/*for(i=0,j=0,k=0;i<n1 && j<n2;i++,j++){
		c[k++]=a[i];
		c[k++]=b[j];
	}
	for(;i<n1;i++){
		c[k++]=a[i];
	}
	for(;j<n2;j++){
		c[k++]=b[j];
	}*/

	//Using while loop
	i=j=k=0;
	// adding elements alternately until both has similar size
	while(i<n1 && j<n2){
		c[k++]=a[i++];
		c[k++]=b[j++];
	}
	// if any remaining elements present in 1st array
	while(i<n1){
		c[k++]=a[i++];
	}
	//if any remaining elements present in 2nd array
	while(j<n2){
		c[k++]=b[j++];
	}
	for(i=0;i<n1+n2;i++)
		printf("%d ",c[i]);
	printf("\n");
}
