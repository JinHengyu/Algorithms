#include<iostream> 
#include<math.h>
int prime(unsigned int);
unsigned int rev(unsigned int);
using namespace std;
int main()
{
	unsigned int n,m;
	cin>>n;
	if(prime(n)!=0)
	{
		m=rev(n);
		if(prime(m)!=0)
		cout<<1<<endl;
		else cout<<0<<endl;
	}
	else cout<<0<<endl;
	return 0;
}
int prime(unsigned int x)
{
	int i,k;
	k=sqrt(x);
	for(i=2;i<=k;i++)
	{
		if(x%i==0)
		return 0;
		else if(i>k)
		return 1;
	}
}
unsigned int rev(unsigned int y)
{
	unsigned int z=0;
	while(y!=0)
	{
		z=z*10+y%10;
		y/=10;
	}
	return z;
}
