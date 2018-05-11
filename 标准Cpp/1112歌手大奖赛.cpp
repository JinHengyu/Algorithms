#include<stdio.h>

int main()
{
	int max,min,n,i,s,sum;
	double ave;
	while(scanf("%d",&n)!=EOF) 
	{
		max=-1;min=101;sum=0;
		for(i=0;i<n;i++)
		{
		  scanf("%d",&s);
		  sum=sum+s;
		  if(max<s) max=s;
		  if(min>s) min=s;
		}
		ave=(sum-max-min)*1.0/(n-2);
		printf("%0.2f\n",ave);
	}
	return 0;
}
