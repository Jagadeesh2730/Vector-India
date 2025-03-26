/* 6.
 WAP in C using function to right rotate array 2 
times .
  i/p:  int a[6]={-2, 2,-5,-12,5,-7};
  o/p:  int a[6]={5,-7,-2, 2,-5,-12};
 void rotate_fun(int  *a,  int ele ,int n); */

#include<stdio.h>
void rotate_fun(int *a,int ele,int n);
void print_arr(const int *p,int ele);
void main()
{
	int i,ele,r;
	
	printf("Enter the value of ele:");
	scanf("%d",&ele);

	int a[ele];
	printf("Enter the array elements:");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	printf("Enter No.of times right rotation:");
	scanf("%d",&r);

	printf("Before:\n");
	print_arr(a,ele);

	rotate_fun(a,ele,r);

	printf("After:\n");
	print_arr(a,ele);
}
void rotate_fun(int *a,int ele,int n)
{
	int i,j,temp;

	for(i=0;i<n;i++)
	{
		temp=a[ele-1];
		
		for(j=ele-1;j>0;j--)
			a[j]=a[j-1];

		a[0]=temp;
	}
}
void print_arr(const int *p,int ele)
{
	int i;

	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
	
	printf("\n");
}
