#include<iostream>
using namespace std;
main(){
	int a,x[100],i=0;
	cin>>a;
	while(a!=0)
	{
		x[i++]=a%2;
		a/=2;
	}
	while(i--)
	cout<<x[i];
}
