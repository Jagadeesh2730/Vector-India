/*42. WAP in C to shift all -ve elements to right side in
 same array.
     i/p:  int a[7]={-1,22,3,-4,-8,33,77};
    o/p:  int a[7]={22,3,33,77,-1,-4,-8,};*/
#include<stdio.h>
void main(){
        int a[7]={-1,22,3,-4,-8,33,77},temp,c=0,ele;
        ele=sizeof(a)/sizeof(a[0]);
        for(int i=0;i<ele-c;i++){
                if(a[i]<0){
                        c++;
                        temp=a[i];
                        for(int j=i;j<ele-1;j++){
                                a[j]=a[j+1];
                        }
                        a[ele-1]=temp;
                        i=i-1;
                }
        }
        for(int i=0;i<ele;i++)
                printf("%d ",a[i]);
        printf("\n");
}
