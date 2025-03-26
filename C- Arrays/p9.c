/*9.WAP in C to  count all set and clear bit array .
         i/p: int a[5]={10,15,64,100,511};
      o/p:     set count =19 , clear count=141 */
#include<stdio.h>
void main(){
        int n,set=0,clear=0,m,num;
        printf("Enter the value of n:");
        scanf("%d",&n);
        int arr[n];
        printf("Enter the array elements:");
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(int i=0;i<n;i++){
            num=arr[i];
            for(int pos=31;pos>=0;pos--){
                m=num>>pos&1;
                if(m){
                    set++;
                }
                else{
                    clear++;
                }
            }
        }
        printf("set count=%d\n",set);
        printf("clear count=%d\n",clear);
}
