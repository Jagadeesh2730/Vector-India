/*2.
WAP in C using function to reverse all elements
of array ,store results in another array.
 i/p: int a[6]={12,42,123,34,78,414};
 o/p: int b[6]={21,24,321,43,87,414};
 void rev_fun(int *a,int *b , int ele );*/

#include<stdio.h>
void rev_fun(int *a,int *b,int ele);
void print_arr(const int *p,int ele);
void main()
{
	int n,i;
	
	printf("Enter the value of n:");
	scanf("%d",&n);
	
	int a[n],b[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Before:\n");
	print_arr(a,n);

	rev_fun(a,b,n);

	printf("After:\n");
	print_arr(b,n);
}
void print_arr(const int *p,int ele)
{
	int i;
	
	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
	
	printf("\n");
}
void rev_fun(int *a,int *b,int ele)
{
	int i,temp,r,res;

	for(i=0;i<ele;i++)
	{
		for(temp=a[i],res=0;temp;temp/=10)
		{
			r=temp%10;
			res=res*10+r;
		}

		b[i]=res;
	}
}

	
