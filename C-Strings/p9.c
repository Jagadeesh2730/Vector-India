/*9.WAP in C to check string lenght is strong or not.
        i/p:  char s[10]= ”vector”;
           o/p:   6  is  not  strong number */
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%s",s);
        int j,len,res,fact,r,temp;
        for(len=0;s[len];len++);
        for(temp=len,res=0;temp;temp/=10){
                r=temp%10;
                for(j=1,fact=1;j<=r;j++)
                        fact=fact*j;
                res=res+fact;
        }
        if(len==res)
                printf("%d is strong number\n",len);
        else
                printf("%d is not strong number\n",len);
}
