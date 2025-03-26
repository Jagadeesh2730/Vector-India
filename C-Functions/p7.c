/*7.WAP in C using function to insert num in array 
at given particular location (index).
  i/p:  int a[6]={-1,2,3,-5,-7};  , n= 99 , p=2
  o/p: int a[6]= {-1, 2 ,99 ,3,-5, -7};
 void  in_fun(int  *a, int ele,int n, int p ); */

#include<stdio.h>
void in_fun(int *a,int ele,int n,int p);
void print_arr(const int *a,int ele);
void main()
{
	int i,ele,n,p;

	printf("Enter the value of ele:");
	scanf("%d",&ele);

	int a[ele];
	printf("Enter the array elements:");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the number:");
	scanf("%d",&n);
	
	printf("Enter the position:");
	scanf("%d",&p);

	in_fun(a,ele+1,n,p);

	printf("Resulting array is :\n");
	print_arr(a,ele+1);
}
void in_fun(int *a,int ele,int n,int p)
{
	int i;
	
	for(i=ele-1;i>p;i--)
	{
		a[i]=a[i-1];
	}

	a[p]=n;
}
void print_arr(const int *a,int ele)
{
	int i;

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	
	printf("\n");
}

