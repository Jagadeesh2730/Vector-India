/*29. WAP in C to count vowels in string using do-while .
            i/p: s[20]=”abc pqr aeio”
            o/p: vowels count= 5*/
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        int count=0;
        for(int i=0;s[i];i++){
                if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i'|| s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U'){
                        count++;
                }
        }
        printf("Vowels count = %d\n",count);
}
