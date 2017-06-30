#include<stdio.h>
#include<conio.h>
void main()
{
int a,e,i,o,u,n;
clrscr();
printf("enter the letter");
scanf("%c",&n);
if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
printf("the letter is vowels",&n);
else
printf("the letter is consonant",&n);
getch();
}
