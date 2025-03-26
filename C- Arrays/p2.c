/*2.  WAP in C to sort array in decending order .
       i/p:  int a[5]={11,55,88,22,44}, *p ; 
        o/p:         88 55  44 22 11 */
#include<stdio.h>
void main(){
	int a[5]={11,55,88,22,44};
	int *p=a,ele,max,j;
	ele=sizeof(a)/sizeof(a[0]);
	/*for(int i=0;i<ele-1;i++){
		for(j=0;j<ele-i-1;j++){
			if(a[j]<a[j+1]){
				max=a[j];
				a[j]=a[j+1];
				a[j+1]=max;
			}
		}
	}*/
	//Another Method
	for(int i=0;i<ele-1;i++){
		for(j=0;j<ele-i-1;j++){
			if(*(p+j)<*(p+j+1)){
				max=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=max;
			}
		}
	}

	for(int i=0;i<ele;i++){
		printf("%d ",*(p+i));
	}
	printf("\n");
}
