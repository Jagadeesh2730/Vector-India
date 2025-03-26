/*47. WAP  in C  to  delete perfect number from array .
        i/p:  int a[6]={6,6,7,28,6,5,24};
       o/p:  int a[6]={7,5,24};*/
#include<stdio.h>
void main(){
	int n,i,j,res,count=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++){
		for(j=1,res=0;j<arr[i];j++){
			if(arr[i]%j==0)
				res=res+j;
		}
		if(res==arr[i]){
			count++;
			for(int k=i;k<n-count;k++){
				arr[k]=arr[k+1];
			}
			i=i-1;
		}
	}
	for(i=0;i<n-count;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
