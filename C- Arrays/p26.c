/*26. WAP in C to delete 2nd,3rd index  from array .
  i/p:  int  a[5]={99,88,77,66,55}, pos1=2, pos2=3;
       o/p:   int a[5]={99,88,55}; */
#include<stdio.h>
void main(){
	int  a[5]={99,88,77,66,55}, pos1=2, pos2=3,ele;
	ele=sizeof(a)/sizeof(a[0]);
	for(int i=pos2;i<ele-1;i++){
		a[i]=a[i+1];
	}
	ele--;
	for(int i=pos1;i<ele-1;i++){
		a[i]=a[i+1];
	}
	ele--;
	for(int i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
