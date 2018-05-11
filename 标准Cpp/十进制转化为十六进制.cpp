#include<iostream>
using namespace std;
int main()
{
	char a[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'},b[100];
	int n,i,j=0;
	cin>>n;
	while(n>0)
	{
		i=n%16;
	    n=n/16;
	    b[j++]=a[i];	    
	}
	for(i=j-1;i>=0;i--)
	cout<<b[i];
	cout<<endl;
	return 0;
	
}
