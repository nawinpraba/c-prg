#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf ("enter the values of a,b,c");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
(printf("%d is greatest among three",a)
}
else
{
printf("%d is greatest among three",c);
}
}
else if(b>c)
{
printf("%d greatest among three",b);
}
else
{
printf("%d greatest amonf three",c);
}
getch();
}
