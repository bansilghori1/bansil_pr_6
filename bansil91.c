/*Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:Enter the string in order to chack whether it is palindrome or not  


Output:
Given string is a Palindrome.
*/

#include<stdio.h>
#include<string.h>

void main (){

char a[50],b[50];
printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("+  Enter the string in order to chack whether it is palindrome or not  +");
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");

printf("The string is :- ");
gets(a);

strcpy(b,a);
strrev(b);

if(strcmp(a,b)==0){
    printf("---------------------------------\n");
    printf("  Given string is a Palindrome.\n");
    printf("---------------------------------");
}else{
    printf("-------------------------------------\n");
    printf("  Given string is not a Palindrome.\n");
    printf("-------------------------------------\n");
}
}
