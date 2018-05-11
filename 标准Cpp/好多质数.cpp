#include<iostream>
#include<math.h>
using namespace std;
int prime(int x)
{
	int i,j,k,sum=0;
	for(i=2;i<=x-1;i++)
	{
		k=sqrt(i);
		for(j=2;j<=k;j++)
		{
			if(i%j==0)break;
		}
		if(j>k)sum+=i;
	}
	return sum;
}
main()
{
	int n;
	while(cin>>n)
	{
		cout<<prime(n)<<endl;
	}
} 
