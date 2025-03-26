/*46.WAP in C to store 1st 7 prime number in array .
     i/p:   int a[7];   
     o/p: int a[7]={2,3,5,7,11,13,17};*/
#include<stdio.h>
void main(){
	int arr[7],count=0,i,j;
	for(i=1;count<=7;i++){
		for(j=2;j<i;j++){
			if(i%j==0)
				break;
		}
		if(i==j){
			arr[count++]=i;
		}
	}
	for(i=0;i<7;i++)
		printf("%d ",arr[i]);
	printf("\n");
}		
