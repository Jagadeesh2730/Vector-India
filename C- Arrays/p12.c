/*12. WAP in C to  print  Smallest element in array.
     i/p :  int a[6]={2,2,3,5,5,4};
     o/p :    res  = 2  */
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int res=arr[0];
	for(int i=0;i<n-1;i++){
		if(res>arr[i+1])
			res=arr[i+1];
	}
	printf("res=%d\n",res);
}
