/*3.WAP in C to  count digits in string using pointer .
       i/p:    char s[20]=”p6c3s1  123  ok7”;
              o/p:   count =   7  */
#include<stdio.h>
void main(){
        char s[20];
        int count=0;
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        char *p=s;
        for(;*p;p++){
                if(*p>='0' && *p<='9')
                        count++;
        }
        //void *p=s;
        //for(;*(char *)p;p++){
        //      if(*(char *)p>=48 && *(char *)p<=57)
        //              count++;
        //}
        printf("count = %d\n",count);
}
