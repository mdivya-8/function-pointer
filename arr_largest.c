#include<stdio.h>
int large(int arr[]);//function declaration
int main()
{
int l,i;
int arr[5]={7,8,10,9,5};
int (*fun)(int arr[])=large;
l=fun(arr);//fun call
printf("largest element :%d\n",l);
}
int large(int arr[])
{
int i,largest;
largest=0;
for(i=0;i<5;i++)
{
if (arr[i]>largest)
	largest=arr[i];
	}
	return largest;
	}
