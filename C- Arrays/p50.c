/*50. WAP  in C  to  delete all strong  num from array .
 i/p:  int a[6]={2,145,2,14,3,2};
 o/p:  int a[6]={14,3};*/
#include<stdio.h>
void main(){
	int n,res,temp,fact,i,j,r,count=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n-count;i++){
		for(temp=arr[i],res=0;temp;temp/=10){
			r=temp%10;
			for(j=1,fact=1;j<=r;j++){
				fact=fact*j;
			}
			res=res+fact;
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
