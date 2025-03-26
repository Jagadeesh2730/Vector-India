/*14.WAP in C to  print second smallest element in array.
             i/p :  int a[7]={2,2,1,5,5,4,4};
              o/p :  second small = 2  */
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n],sec_min,temp;
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<n-1;i++){
		if(arr[i]!=arr[i+1]){
			sec_min=arr[i+1];
			break;
		}
	}
	printf("Second smallest element:%d\n",sec_min);
}
