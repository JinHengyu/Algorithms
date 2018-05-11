#include<stdio.h>
int fun(int x);
int main()
{
	int n,p;
 while(scanf("%d",&n)!=EOF)
 {
 	p=fun(n);
 	if(p)
 	printf("Yes\n");
 	else
 	printf("No\n");
 }
	return 0;
}
int fun(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
		return 0;
		break;}
		
	}
	return 1;
}
