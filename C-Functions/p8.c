/*8.
 WAP in C using function to merge 2 array data 
in 3rd  array .
  i/p:  int a[6]={2,3,4},  b[3]={11,22,33};
  o/p: int c[6]= {2,11,3,22,4,33};
 void  in_fun(int  *a,   int *b,   int *c, 
                    int ele1,int ele2, int ele3 ); */

#include<stdio.h>
void in_fun(int *a,int *b,int *c,int ele1,int ele2,int ele3);
void print_arr(const int *p,int ele);
void main()
{
	int i,n1,n2;

	printf("Enter the value of n1:");
	scanf("%d",&n1);

	int a[n1];
	printf("Enter 1st array elements:");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the value of n2:");
	scanf("%d",&n2);

	int b[n2];
	printf("Enter 2nd array elements:");
	for(i=0;i<n2;i++)
		scanf("%d",&b[i]);
	
	int c[n1+n2];

	in_fun(a,b,c,n1,n2,n1+n2);

	printf("Resulting array is:");
	print_arr(c,n1+n2);
}
void in_fun(int *a,int *b,int *c,int ele1,int ele2,int ele3)
{
	int i=0,j=0,k=0;

	while(i<ele1 && j<ele2)
	{
		c[k++]=a[i++];
		c[k++]=b[j++];
	}

	while(i<ele1)
		c[k++]=a[i++];
	
	while(j<ele2)
		c[k++]=b[j++];
}
void print_arr(const int *p,int ele)
{
	int i;

	for(i=0;i<ele;i++)
		printf("%d ",p[i]);
	
	printf("\n");
}

