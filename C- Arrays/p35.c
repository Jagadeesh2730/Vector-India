/*35.WAP in C to print and count  perfect  in array .
        i/p:  int a[7]={3,4,5,6,7,28,9};
        o/p:         6  28   , count=  2  */

#include<stdio.h>
void main(){
        int n,i,j,res,count=0;
        printf("Enter the value of n:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        for(i=0;i<n;i++){
                for(j=1,res=0;j<arr[i];j++){
                        if(arr[i]%j==0)
                                res+=j;
                }
                if(res==arr[i]){
                        printf("%d ",arr[i]);
                        count++;
                }
        }
        printf("\t,count=%d\n",count);
}
