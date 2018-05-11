#include<iostream> 
using namespace std;
int main()
{
		int n;
	cin>>n;
	while(n--)
	{   int x[100];
		int a,r,i=0;
		cin>>a;
		do{
			r=a%8;
			a/=8;
			x[i++]=r;
		}while(a!=0);
	while(i--)
	cout<<x[i];
	cout<<endl;
	
	}
	return 0;
	
}

