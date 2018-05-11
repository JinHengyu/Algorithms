#include<iostream>
using namespace std;
int fun(int i,int j)
{
int r;
do
{
	r=i%j;
	i=j;
	j=r;
}while(r!=0);
return i;
}
int main()
{
	int a,b,c,d,p,n;
	while((cin>>a>>b>>c>>d))
	{
	  p=b*d;
	  n=fun(b,d);
	  p=p/n;
	  a=a*p/b;
	  c=c*p/d;
	  a=a+c;
	  n=fun(a,p);
	  a=a/n;
	  p=p/n;
	  cout<<a<<"/"<<p<<endl;
	}
	return 0;
}
