#include<stdio.h>
int large(int arr[])
{
	int i,largest;
	largest=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>largest)
		largest=arr[i];
	}
	return largest;
}
int small(int arr[])
{
	int i,smallest;
	smallest=arr[0];
	for(i=1;i<5;i++)
	{
		if(arr[i]<smallest)
		smallest=arr[i];
	}
	return smallest;
}
int main()
{
int i,l,s,arr[5]={100,200,300,20000,78};
int (*fun[2]) (int arr[])={large,small}; //fun pointer
//fun[0]=large;
//fun[1]=small;
printf("largest and smallest elements are :\n");
for(i=0;i<2;i++)
{
printf("%d\n",fun[i](arr));
}
}

