/* WAP in C to count all duplicate elements from array.
        i/p:  a[10]={3,3,2,4,4,2,5,3,4,9}
     o/p:  3 ->3 times ,2-> 2 times , 4-> 3 times */
#include<stdio.h>
void main(){
	int n;
	//int n=10;
	int count;
	printf("Enter the value of n:");
	scanf("%d",&n);
	//int arr[10]={3,3,2,4,4,2,5,3,4,9};
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++){
		count=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				for(int k=j;k<n-1;k++){
					arr[k]=arr[k+1];
				}
				count++;
				j--;
				n--;
			}
		}
		if(count>1)
			printf("%d --> %d times\n",arr[i],count);
	}
}
					
