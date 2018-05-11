#include<stdio.h>
int main()
{
	int n,i,a[100],max,min,sum;
	double ave;
	while(scanf("%d",&n)!=EOF)
	{
		sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		max=a[0];
		min=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		for(i=1;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
		}
		ave=(sum-max-min)/(n-2.0);
		printf("%.2f\n",ave);
	}
	return 0;
}
