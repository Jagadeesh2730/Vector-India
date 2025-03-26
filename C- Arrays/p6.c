/*6.WAP in C to delete 1st digit of all array elements.
     i/p:  int a[6]={12,234,321,45,654,1234};
    o/p:  int a[6]={2 , 34, 21, 5, 54, 234};*/
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n],temp,rev=0,res=0,m=1;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		for(temp=a[i],rev=0;temp;temp/=10){
			rev=rev*10+temp%10;
		}
		rev=rev/10;
		for(temp=rev,res=0;temp;temp/=10){
			res=res*10+(temp%10);
		}
		a[i]=res;
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
