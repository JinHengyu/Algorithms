#include<iostream>
using namespace std;
int main()
{
	int m,n,a,b;
	while((cin>>m>>n))
	{
	if((n%2==0)&&((n-2*m)>=0)&&((4*m-n)>=0))
	{
		b=(n-2*m)/2;
		a=m-b;
		cout<<a<<" "<<b<<endl;
	}
	else
	{
		cout<<"-1"<<" "<<"-1"<<endl;
    }
}
    return 0;
}
