/*34. WAP in C to print and count  prime  in array .
       i/p:  int a[7]={3,4,5,6,7,8,9};
       o/p:         3  5  7  , count=  3  */
#include<stdio.h>
void main(){
        int n,i,j,count=0;
        printf("Enter the value of n:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        for(i=0;i<n;i++){
                for(j=2;j<arr[i];j++){
                        if(arr[i]%j==0)
                                break;
                }
                if(arr[i]==j){
                        printf("%d ",arr[i]);
                        count++;
                }
        }
        printf("\t,count=%d\n",count);
}
