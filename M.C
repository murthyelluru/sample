#include<stdio.h>
#include<conio.h>
void main()
{
char a='a';
char c='A';
if(a>=97 && a<=122)
{
	a=~32 & a;
}
if(c>=65 && c<=91)
{
	c=32 | c;
}

printf("%c %c",a,c);
getch();
}