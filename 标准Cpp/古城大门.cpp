#include<iostream>
using namespace std;
int main()
{
	int a,b,r,c,d;
    while((cin>>a>>b))	
	{
	c=a;
	d=b;
    do
	{
		r=a%b;
		a=b;
		b=r;
	}while(r>0);
   c=c/a;
   d=d/a;
   cout<<c<<" "<<d<<endl;
   }
   return 0;
}
