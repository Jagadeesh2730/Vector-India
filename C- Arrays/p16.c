/* 16. WAP  in C to swap(using bitwise) 0th ele with 
last  ele in array using 2 pointer without any loop.   
  i/p:  int  a[6]={111,222,333,444,555,666}, *p,*q ;
    o/p:          666  222  333  444  555  111 */
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n],*p,*q;
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	p=arr;
	q=p+n-1;
	*p^=*q^=*p^=*q;
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
