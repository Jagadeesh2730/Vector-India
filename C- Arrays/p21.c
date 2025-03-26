/*21. WAP to C to insert 99 on 0th , 88 on 1st index in 
same array .    
   i/p:   int a[9]={30,11,45,34,14,8 ,50 },num=99 ;
     o/p:   int a[9]={99,88, 30,11,45,34,14,8, 50};*/
#include<stdio.h>
void main(){
         int a[9]={30,11,45,34,14,8 ,50 },num1=99,in1=0,num2=88,in2=1;
         int ele=sizeof(a)/sizeof(a[0]);
         for(int i=ele-1;i>in2;i--){
                a[i]=a[i-2];
        }
        a[in1]=num1;
        a[in2]=num2;
        for(int i=0;i<ele;i++)
                printf("%d ",a[i]);
        printf("\n");
}
