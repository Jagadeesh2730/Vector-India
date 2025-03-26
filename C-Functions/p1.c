/*1.
WAP in C using function to sum of digit of all
elements in array , store results in another array.
i/p: int a[6]={1,22,121,34,78,444};
o/p: int b[6]= {1, 4, 4, 7, 15, 12 };
void sum_fun(int *a,int *b , int ele );*/

#include<stdio.h>
void sum_fun(int *a,int *b,int ele);
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

	sum_fun(a,b,n);

	printf("After:\n");
	print_arr(b,n);
}
void sum_fun(int *a,int *b,int ele)
{
	int i,temp,s;
	for(i=0;i<ele;i++)
	{
		for(temp=a[i],s=0;temp;temp/=10)
		{
			s=s+temp%10;
		}
		b[i]=s;
	}
}
void print_arr(const int *p,int ele)
{
	int i;
	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
	printf("\n");
}
