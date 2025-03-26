/*13.WAP in C to  print second largest element in array.
             i/p :  int a[7]={2,2,3,5,5,4,4};
              o/p :  second large = 4  */
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n],sec_max,temp;
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=n-1;i>0;i--){
		if(arr[i]!=arr[i-1]){
			sec_max=arr[i-1];
			break;
		}
	}
	printf("Second largest element:%d\n",sec_max);
}
