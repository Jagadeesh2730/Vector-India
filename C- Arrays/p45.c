/*45.WAP in C to print 1st perfect and pos form  array . 
    i/p:  int a[5]={2,4,6,28,6};
   o/p:       num= 6, pos= 2*/
#include<stdio.h>
void main(){
	int n,num,pos,c=0,j,res;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;c<1;i++){
		for(j=1,res=0;j<arr[i];j++){
			if(arr[i]%j==0)
				res=res+j;
		}
		if(res==arr[i]){
			num=arr[i];
			pos=i;
			c++;
		}
	}
	printf("num=%d\t,pos=%d\n",num,pos);
}
