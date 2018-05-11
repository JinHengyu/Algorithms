#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
	int i,j,k,h,n,max,sum,p,a[101][101];
	while((cin>>n))
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j]; 
			}
		}
		max=a[0][0];
		for(i=0;i<n;i++)
		{
			for(j=i;j<n;j++)
			{
				for(k=i,sum=0;k<=j;k++)
					sum+=a[k][0];
				if(sum>max)
					{
						max=sum;
					}
					for(h=1;h<n;h++)
					{
						for(k=i,p=0;k<=j;k++)
						{
							p+=a[k][h];
						}
					if(sum>=0)
						{
							sum+=p;
						}
					else 
						  sum=p;
					if(sum>max)
						   max=sum;
						
					}
			}
		}
		cout<<max<<endl;
	}	
	return 0;
}
