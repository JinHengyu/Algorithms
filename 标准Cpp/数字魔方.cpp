#include <iostream>
#define N 100
using namespace std;
int main( )
{
	int a[N][N],i,j,n,k;
	do
	{
		cin>>n;
	}while(n%2==0||n<1||n>100);
	for(i=0;i<n;i++)
	  for(j=0;j<n;j++)
	     a[i][j]=0;
	j=n/2;
	i=0;
                 a[0][j]=1;
	for(k=2;k<=n*n;k++)
	{
		i=i-1;
		j=j+1;
		if(i<0&&j>n-1)
		{
			i=i+2;
			j=j-1;
		}
		else
		{
			if(i<0) i=n-1;
			if(j>n-1) j=0;
		}
		if(a[i][j]==0)
		   a[i][j]=k;
		else
		{
		   i=i+2;
		   j=j-1;
		   a[i][j]=k;
	                 }
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		   cout<<a[i][j]<<' ';
                                   cout<<a[i][n-1];
		cout<<endl;
	}
	return 0;
}

