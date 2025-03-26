/*1. WAP in C to print array using int pointer.
   i/p:  int a[5]={11,22,33,44,55}, *p=a;
   o/p:     11  22   33  44  55 */
#include<stdio.h>
void main(){
	int a[5]={11,22,33,44,55};
	int *p=a,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<ele;i++){
		printf("%d ",*p);
		p=p+1;
	}
	printf("\n");
}
	
