/*22.  WAP in C to merge 2 array into 3rd array .
   i/p: int a[3]={1,5,7}; b[3]={11,22,33};
             o/p:  int c[6]={1,11,5,22,7,33};*/
#include<stdio.h>
void main(){
	int n1,n2,i,j,k;
	int a[3]={1,5,7},b[3]={11,22,33};
	n1=sizeof(a)/sizeof(a[0]);
	n2=sizeof(b)/sizeof(b[0]);
	int c[n1+n2];
	//Using for loop
	/*for(i=0,j=0;i<n1+n2;i=i+2,j++){
		c[i]=a[j];
		c[i+1]=b[j];
	}*/

	//Using while loop
	i=j=k=0;
	while(i<n1 && j<n2){
		c[k++]=a[i++];
		c[k++]=b[j++];
	}
	for(int i=0;i<n1+n2;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
}
