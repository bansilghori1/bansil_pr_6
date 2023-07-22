/*Q.2 Write a Program to count the frequency of each character in a given string.
For example,
Input:
Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 2
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/

#include<stdio.h>
#include<string.h>
void main(){

char a[100];
printf("????????????????????????\n");
printf("  Enter any string -> ");
gets(a);
printf("????????????????????????\n\n");
int i,k;



printf("Frequency of each letter: ");

for(i='a';i<='z';i++){
int j=0;
for(k=0;a[k]!=0;k++){
    if(a[k]==i)
    j++;
    }if(j>0)
    printf("\n%c => %d",i,j);
}
}
