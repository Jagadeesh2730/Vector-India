/*39. WAP in C to right rotate array 3 times in same array.
     i/p:  int a[7]={11,21,31,41,51,61,71};
    o/p:  int a[7]={51,61,71,11,21,31,41};*/
#include<stdio.h>
void main(){
        int a[7]={11,21,31,41,51,61,71},r=3,temp,ele;
        ele=sizeof(a)/sizeof(a[0]);
        for(int i=0;i<r;i++){
                temp=a[ele-1];
                for(int j=ele-1;j>0;j--){
                        a[j]=a[j-1];
                }
                a[0]=temp;
        }
        for(int i=0;i<ele;i++)
                printf("%d ",a[i]);
        printf("\n");
}
