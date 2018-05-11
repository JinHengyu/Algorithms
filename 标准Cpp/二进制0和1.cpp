#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n;
	while((cin>>n))
	{
	int a[10000],i,j,k,p;
	i=0;j=0;k=0;p=0;
	memset(a,(-1),sizeof(a));
	while(n>0)
	{
	
		a[i++]=n%2;
		n=n/2;
	}
	p=i-1;
	while(p>=0)
	{
		if(a[p]==1)
		  j++;
		if(a[p]==0)
		 k++;
		p=p-1;
	}
	cout<<j<<endl;
	cout<<k<<endl;
  }
  return 0;
}
