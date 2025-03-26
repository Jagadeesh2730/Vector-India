/* 17. WAP in C to delete prime digit from string.
        i/p:   char s[20]=”abc3456 567abc”;
           o/p:      abc46 6abc  */
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        int i,j,k,num;
        for(i=0;s[i];i++){
                if(s[i]>='0' && s[i]<='9'){
                        num=s[i]-48;
                        for(j=2;j<num;j++){
                                if(num%j==0)
                                        break;
                        }
                        if(num==j){
                                for(k=i;s[k];k++)
                                        s[k]=s[k+1];
                                i--;
                        }
                }
        }
        printf("%s\n",s);
}
