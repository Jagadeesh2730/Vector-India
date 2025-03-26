/* WAP in C to delete duplicate elements from array .
        i/p:  a[10]={3,3,2,4,4,1,2,3,7,9}
         o/p:  a[10]={3,2,4,1,7,9};*/
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(int k=j;k<n-1;k++)
					arr[k]=arr[k+1];
				j--;
				n--;
			}
		}
	}
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
