/*3.
 WAP in C using function to delete 1st digits of   
all elements in array .
  i/p:  int a[6]={12,142,1234,314,78,414};
  o/p: int a[6]={2,42,234,34,8,14};
 void del_fun(int  *a,  int ele ); */

#include<stdio.h>
void del_fun(int *a,int ele);
void print_arr(const int *p,int ele);
void main()
{
	int i,n;
	printf("Enter the value of n:");
	scanf("%d",&n);

	int a[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Before:\n");
	print_arr(a,n);

	del_fun(a,n);

	printf("After:\n");
	print_arr(a,n);
}
void del_fun(int *a,int ele)
{
	int i,temp,res,r,m;

	for(i=0;i<ele;i++)
	{
		for(temp=a[i],m=1,res=0;temp>9;temp/=10)
		{
			r=temp%10;
			res=r*m+res;
			m=m*10;
		}

		a[i]=res;
	}
}
void print_arr(const int *p,int ele)
{
	int i;

	for(i=0;i<ele;i++)
		printf("%d ",p[i]);

	printf("\n");
}
