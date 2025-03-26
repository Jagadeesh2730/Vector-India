/* 43 .WAP in C to shift all odd elements to right side 
in same array.
 i/p:  int a[7]={11,22,22,44,55,33,88};
 o/p:  int a[7]={22,22,44,88,11,55,33};*/

#include<stdio.h>
void main(){
	int n,c=0,temp;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n-c;i++){
		if(arr[i]%2==1){
			c++;
			temp=arr[i];
			for(int j=i;j<n-1;j++){
				arr[j]=arr[j+1];
			}
			arr[n-1]=temp;
			i=i-1;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
 	
