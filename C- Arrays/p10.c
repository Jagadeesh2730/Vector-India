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
			set=0;
            for(int pos=31;pos>=0;pos--){
                m=num>>pos&1;
                if(m){
                    set++;
                }
            }
			arr[i]=set;
        }
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
		printf("\n");
}
