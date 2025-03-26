/*4.
 WAP in C using function to count strong and 
armstrong number elements in array .
  i/p:  int a[6]={2,153,145,2,3,153};
 o/p:  strong number count = 3   
   armstrong number count = 5   
 int strong_fun(int  *a,  int ele );
 int armstrong_fun(int  *a,  int ele );*/

#include<stdio.h>
int strong_fun(int *a,int ele);
int armstrong_fun(int *a,int ele);
void main()
{
	int i,n;
	printf("Enter the value of n:");
	scanf("%d",&n);

	int a[n];
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("strong number count = %d\n",strong_fun(a,n));
	printf("armstrong number count = %d\n",armstrong_fun(a,n));
}
int strong_fun(int *a,int ele)
{
	int temp,res,i,j,r,s,count=0;

	for(i=0;i<ele;i++)
	{
		for(temp=a[i],res=0;temp;temp/=10)
		{
			r=temp%10;

			for(j=1,s=1;j<=r;j++)
			{
				s=s*j;
			}

			res=res+s;
		}

		if(a[i]==res)
			count++;
	}
	return count;
}
int armstrong_fun(int *a,int ele)
{
	int temp,res,i,j,s,c,r,count=0;

	for(i=0;i<ele;i++)
	{
		for(temp=a[i],c=0;temp;temp/=10,c++);

		for(temp=a[i],res=0;temp;temp/=10)
		{
			r=temp%10;

			for(j=1,s=1;j<=c;j++)
				s=s*r;

			res=res+s;
		}

		if(a[i]==res)
			count++;
	}
	return count;
}
