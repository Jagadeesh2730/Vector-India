/*36. WAP in C to print and count  strong  in array .
        i/p:  int a[7]={2,4,2,6,145,28,1};
        o/p:         2  2  145  1 ,count= 4   */
#include<stdio.h>
void main(){
        int n,i,j,res,fact,temp,count=0;
        printf("Enter the value of n:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        for(i=0;i<n;i++){
                for(temp=arr[i],res=0;temp;temp/=10){
                        for(j=1,fact=1;j<=temp%10;j++){
                                fact=fact*j;
                        }
                        res=res+fact;
                }
                if(res==arr[i]){
                        printf("%d ",arr[i]);
                        count++;
                }
        }
        printf("\t,count=%d\n",count);
}
