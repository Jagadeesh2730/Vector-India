/*44.WAP in C to shift all 0  to left side in same array.
    i/p:  int a[7]={11,0,0,44,0,33,0};
    o/p:  int a[7]={0,0,0,0,11,44,33};*/

#include<stdio.h>
void main(){
	int n,c=0,temp;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=n-1;i>c;i--){
		if(arr[i]==0){
			//temp=arr[i];
			c++;
			for(int j=i;j>0;j--)
				arr[j]=arr[j-1];
			arr[0]=0;
			//arr[0]=temp;
			i=i+1;
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
