/*5.WAP in C to find sum of 1st digit of all array 
      i/p:  int a[5]={123,23,89,3425,721};
     o/p:      1+2+8+3+7 ---->  21  */
#include<stdio.h>
void main(){
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n],r,temp,res=0;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++){
		temp=a[i];
		while(temp){
			r=temp%10;
			temp/=10;
		}
		res+=r;
	}
	printf("res=%d\n",res);
}
