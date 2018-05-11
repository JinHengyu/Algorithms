#include<iostream>
using namespace std;
int f(int a)
{
	if(a==1||a==2) return 1;
	return f(a-1)+f(a-2);
}
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		cout<<f(a);
	}
	return 0; 
}
