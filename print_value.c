#include<stdio.h>
void value(int a);
int main()
{
int a;
printf("enter a value /n");
scanf("%d",&a);
void (*fun)(int)=value;
fun(a);
}
void value(int a)
{
printf("%d\n",a);
}
