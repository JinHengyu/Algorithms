#include<iostream>
using namespace std;
int main()
{
	int n,a,i,max;
	while((cin>>n))
	{
		i=0;max=0;
		cin>>a;
		max=a;
		for(i=0;i<n-1;i++)
		{
			cin>>a;
			if(a>max)
			{
				max=a;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
 
