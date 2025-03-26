/*51. WAP  in C  to  delete odd palindrome number  
from array .
      i/p:  int a[6]={22,141,222,45,33,77};
      o/p:  int a[6]={22,222,45};*/
#include<stdio.h>
void main(){
	int n,res,r,temp,i,j,count=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	//int arr[6]={22,141,222,45,33,77};
	for(i=0;i<n-count+1;i++){
		for(temp=arr[i],res=0;temp;temp/=10){
			r=temp%10;
			res=res*10+r;
		}
		if(res==arr[i] && res%2==1){
			count++;
			for(j=i;j<n;j++){
				arr[j]=arr[j+1];
			}
		}
	}
	printf("%d\n",count);
	for(i=0;i<n-count;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
