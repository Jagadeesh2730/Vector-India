/* 7.WAP in C to print binary of all elemets in array .
       i/p: int a[5]={10,100,1000,100,10}
       o/p:    */
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n],pos=31;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		printf("%d binary is : ",a[i]);
		for(pos=31;pos>=0;pos--){
			if((pos+1)%8==0&&pos<31)
				printf(" ");
			printf("%d",a[i]>>pos&1);
		}
		printf("\n");
	}
}
