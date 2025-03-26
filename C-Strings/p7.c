/*7.WAP in C to count set bit all char in string.
   i/p:  char s[10]=”bcd”;
      o/p:   3   4   3*/
#include<stdio.h>
void main(){
        char s[10];
        printf("Enter the string:");
        scanf("%s",s);
        int i,pos,count;
        for(i=0;s[i];i++){
                for(pos=7,count=0;pos>=0;pos--){
                        if(s[i]>>pos&1)
                                count++;
                }
                printf("%d ",count);
        }
        printf("\n");
}
