#include<stdio.h>
int sum(int x,int y);//function declaration
int main()
{
int x,y,z=0;
printf("enter a,b values\n");
scanf("%d %d",&x,&y);
int (*func)(int,int)=sum;//contains the address of sum func
z=func(x,y);//function call
//another way
/* int (*func)(int,int);
func=sum;
z=func(x,y);
*/
printf("%d\n",z);
}
int sum (int x,int y)
{
return x+y;
}
