/* 5.
 WAP in C using function to count -ve element 
(bitwise op) and delete -ve elements in array .
  i/p:  int a[6]={-2, 2,-5,-12,5,-7};
 o/p:  -ve number count = 4     
         int a[ ]= {2,5};
 int count_del_fun(int  *a,  int *ele ); */

#include<stdio.h>
int count_del_fun(int *a,int *ele);
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

	printf("-ve number count = %d\n",count_del_fun(a,&n));
	
	printf("After:\n");
	print_arr(a,n);
}
int count_del_fun(int *a,int *ele)
{
	int i,j,count=0;

	for(i=0;i<*ele;i++)
	{
		if(a[i]<0)
		{
			count++;

			for(j=i;j<*ele-1;j++)
				a[j]=a[j+1];

			i--;
			(*ele)--;
		}
	}
}
void print_arr(const int *p,int ele)
{
	int i;

	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
	
	printf("\n");
}
