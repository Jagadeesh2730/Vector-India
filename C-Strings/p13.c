/*13. WAP in C to delete desired char only 2 times 
from right side of given  string using while loop.
         i/p: char s[20]=”abcccababc” , ch= ‘c’
             o/p:   abccabab */
#include<stdio.h>
void main(){
        char s[20],ch;
        printf("Enter the string:");
        scanf("%s",s);
        printf("Enter the character:");
        scanf(" %c",&ch);
        int i,j,len,count=0;
        for(len=0;s[len];len++);
        i=len-1;
        // Using while loop
		/*while(i>=0 && count<2){
                if(s[i]==ch){
                        count++;
                        j=i;
                        while(s[j]){
                                s[j]=s[j+1];
                                j++;
                        }
                        i++;
                }
                i--;
        }*/
        //Using for loop
        for(i=len-1;i>=0 && count<2;i--){
              if(s[i]==ch){
                      count++;
                      for(j=i;s[j];j++)
                              s[j]=s[j+1];
                      i++;
              }
        }
        printf("%s\n",s);
}
