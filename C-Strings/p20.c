/*20. WAP in C to insert ‘p’ at 0th index , ‘q’ at 1st 
index  in same string  using  goto .
     i/p:   char s[10]=”123456”
          o/p:     pq123456*/
#include<stdio.h>
void main(){
        char s[20],ch1,ch2;
        int i,in1,in2,len=0;
        printf("Enter the string:");
        scanf("%s",s);
        ch1='p';
        ch2='q';
        in1=0;
        in2=1;
        L1:
                if(s[len]){
                        len++;
                        goto L1;
                }
        i=0;
        int j;
        L2:
                if(i==in1){
                        for(j=len+1;j>in1;j--)
                                s[j]=s[j-1];
                        s[in1]=ch1;
                        len++;
                        i++;
                }
                if(i==in2){
                        for(j=len+1;j>in2;j--)
                                s[j]=s[j-1];
                        s[in2]=ch2;
                        len++;
                        i++;
                }
                if(i<2)
                        goto L2;
        printf("%s\n",s);
}
