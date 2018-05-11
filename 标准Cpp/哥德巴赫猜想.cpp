#include<iostream>
using namespace std;
int prime (int a)
{
	int i,s;
	for(i=2;i<a;i++)
	{
		if(a%i==0) {s=0;break;
		}
	}
	if(i>=a) s=1;
	return s;
}
int main()
{
	int m,j;
	while((cin>>m))
	{
		for(j=2;j<=m/2;j++)
		{
			if((prime(j)==1)&&(prime(m-j)==1))
			{
				cout<<j<<"+"<<m-j<<endl;
				break;
			}
		}
	}
   return 0;
} 
