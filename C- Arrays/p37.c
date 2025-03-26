/*37.WAP in C to print and count armstrong  in array .
          i/p:  int a[7]={22,4,21,6,153,28,11};
              o/p:          4 6 153  ,count= 3  */
#include<stdio.h>
void main(){
        int n,i,j,res,temp,r,s,c,count=0;
        printf("Enter the value of n:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);
        for(i=0;i<n;i++){
                for(temp=arr[i],c=0;temp;temp/=10,c++);
                for(temp=arr[i],res=0;temp;temp/=10){
                        r=temp%10;
                        for(j=1,s=1;j<=c;j++){
                                s=s*r;
                        }
                        res=res+s;
                }
                if(res==arr[i]){
                        printf("%d ",arr[i]);
                        count++;
                }
        }
        printf("\t,count=%d\n",count);
}
