#include<iostream>
using namespace std;
int main()
{
	int i,a,b[30],x,j=0;
		cin>>a; 
		while(a!=0)
		{
		  x=a%2;
		  a/=2;
		  b[j++]=x;
	    }
		while(j>0)
		{
			cout<<b[--j];
		}
		cout<<endl;
	return 0;
}

