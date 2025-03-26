/*15.WAP in C to delete first 3 char from string. 
      i/p:   char s[10]=”armstrong num” 
             o/p:  strong num */
#include<stdio.h>
void main(){
        char s[20];
        printf("Enter the string:");
        scanf("%[^\n]s",s);
        int i,j,count;
        for(i=0;s[i] && count<3;i++){
                count++;
                for(j=i;s[j];j++)
                        s[j]=s[j+1];
                i--;
        }
        printf("%s\n",s);
}
