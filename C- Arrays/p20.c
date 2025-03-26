/* WAP to C to insert 10 on sorted place in sorted array
    i/p:   int a[7]={2,3,5,7,11,13 }, num= 10;
         o/p:   int a[7]={2,3,5,7, 10, 11,13};*/
#include<stdio.h>
void main(){
         int a[7]={2,3,5,7,11,13 },num=10,i,ele;
         ele=sizeof(a)/sizeof(a[0]);
         for(i=ele-1;i>=0;i--){
                if(num>a[i-1])
                        break;
                else
                        a[i]=a[i-1];
        }
        a[i]=num;
        for(i=0;i<ele;i++)
                printf("%d ",a[i]);
        printf("\n");
}
