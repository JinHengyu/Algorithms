#include<iostream>
#include <iomanip>
using namespace std;
int year[2]={365,366};
int month[2][13]={0,31,28,31,30,31,30,31,31,30,31,30,31,0,31,29,31,30,31,30,31,31,30,31,30,31};
int leap(int n)
{
	if((n%4==0 && n%100!=0) || (n%400==0))
	{
		return 1;
	} 
	return 0;
}
int main()
{
	int n,i,j;
	while((cin>>n))
	{
		if(n<=82)
		{
			if(n<=21)
			{
				i=2007;
				j=10;
				n=n+10;
			}
			else
			{
				n-=21;
				for(j=11;n>month[0][j];j++)
				{
					n-=month[0][j];
				}
				i=2007;
			}
		}
		else
		{
			n-=82;
			for(i=2008;n>year[leap(i)];i++)
			{
				n-=year[leap(i)];
			}
			for(j=1;n>month[leap(i)][j];j++)
			{
				n-=month[leap(i)][j];
			}
		}
			cout<<i <<"-"
		<< setw(2) << setfill('0') <<j<<"-"
		<< setw(2) << setfill('0') <<n<<endl;
	}
	return 0;
}
