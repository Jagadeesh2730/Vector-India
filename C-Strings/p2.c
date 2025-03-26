/*2.WAP in C to  find lenght of string using pointer.
        i/p:    basic_program  , char s[20],*p;
           o/p:    lenght=  13*/
#include<stdio.h>
void main(){
        char s[20],*q;
        //void *p=&s;
        printf("Enter the string:");
        scanf("%s",s);
        //scanf("%s",(char *)p);
        q=s;
        int len;
        //for(len=0;*(char *)p;p++,len++);
        for(len=0;*q;q++,len++);
		printf("Length of the string is %d\n",len);
}
