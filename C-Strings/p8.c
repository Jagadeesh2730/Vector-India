/* 8.WAP in C to check string lenght is prime or not.
        i/p:  char s[10]= ”pawan”;
           o/p:   yes   5  is  prime number */
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%s",s);
        int len,i;
        for(len=0;s[len];len++);
        for(i=2;i<len;i++){
                if(len%i==0)
                        break;
        }
        if(len==i){
                printf("yes %d is prime number\n",len);
        }
        else{
                printf("%d is not a prime number\n",len);
        }
}
