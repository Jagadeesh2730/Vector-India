/*16. WAP in c to delete digits from string .
   i/p:   char s[20]=”covid19 a12b”;
      o/p:   covid ab*/
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        int i,j;
        for(i=0;s[i];i++){
                if(s[i]>='0' && s[i]<='9'){
                        for(j=i;s[j];j++){
                                s[j]=s[j+1];
                        }
                        i--;
                }
        }
        printf("%s\n",s);
}
