#include<stdio.h>
int add(int a,int b); // function declaration
int sub(int a,int b);
int mul(int a,int b);
int main()
{
int i,a,b;
	printf("enter a,b values\n");
	scanf("%d %d",&a,&b);
		int (*fun[3])(int, int); // array of fun pointer
		fun[0]=add;
		fun[1]=sub;
		fun[2]=mul;
			printf("add sub mul\n");
			for(i=0;i<3;i++)
			printf("%d\n",fun[i](a,b));//fun call
}
int add(int a,int b) //add function
	{
	return a+b;
	}
int sub(int a,int b) //sub function
	{
	return a-b;
	}
int mul(int a,int b) //mul function
	{
	return a*b;
	}



