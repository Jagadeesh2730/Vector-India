/*15. WAP  in C to swap 3rd ele with 4th ele in array .
   i/p:  int  a[6]={11,22,33,44,55,66};
      o/p:            11  22  33  55 44, 66 */
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n],temp;
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	temp=arr[3];
	arr[3]=arr[4];
	arr[4]=temp;
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
