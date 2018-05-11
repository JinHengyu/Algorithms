#include<iostream>
using namespace std;
int fun(int x)
{
	if(x==1) return 1;
	else if(x==2) return 2;
	else return fun(x-1)+fun(x-2);
}
int main()
{
	int n;
	while((cin>>n))
	{
		cout<<fun(n)<<endl;	
	}
	return 0;
}

