/* WAP to C to insert 51 on 3rd  index in same array .   
   i/p:   int a[7]={2,3,5,7,11,13 },in=3 ,num=51;
          o/p:   int a[7]={2,3,5,51,7,11,13};*/
#include<stdio.h>
void main(){
         int a[7]={2,3,5,7,11,13 }, in=3, num=51,ele;
         ele=sizeof(a)/sizeof(a[0]);
         for(int i=ele-1;i>in;i--){
                a[i]=a[i-1];
        }
        a[in]=num;
        for(int i=0;i<ele;i++)
                printf("%d ",a[i]);
        printf("\n");
}
