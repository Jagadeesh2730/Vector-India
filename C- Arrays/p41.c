/*41.WAP in C to left rotate array 2 times in same array.
     i/p:  int a[7]={11,21,31,41,51,61,71};
    o/p:  int a[7]={31,41,51,61,71,11,21};*/
#include<stdio.h>
void main(){
         int a[7]={11,21,31,41,51,61,71},r=2,temp,ele;
         ele=sizeof(a)/sizeof(a[0]);
         for(int i=0;i<r;i++){
                temp=a[0];
                for(int j=0;j<ele-1;j++){
                        a[j]=a[j+1];
                }
                a[ele-1]=temp;
        }
        for(int i=0;i<ele;i++)
                printf("%d ",a[i]);
        printf("\n");
}
