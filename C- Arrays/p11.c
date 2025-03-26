/*11. WAP in C to count -ve ,+ve, even , odd  ele in array .
  i/p:  int a[10]={-11,11,12,-12,9,8,-3,10,22};
  o/p:   +ve = 6 , -ve = 3 , odd = 2 , even = 4  */
#include<stdio.h>
void main(){
	int n,pos=0,neg=0,odd=0,even=0,temp;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<n;i++){
		temp=arr[i];
		if(temp>=0){
			pos++;
			if(temp%2==0)
				even++;
			else
				odd++;
		}
		else
			neg++;
	}
	printf("+ve=%d\t,-ve=%d\t,odd=%d\t,even=%d\n",pos,neg,odd,even);
}
