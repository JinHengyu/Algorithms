#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int n;
	while((cin>>n))
	{
	    int i,k;
		k=sqrt(n);
		for(i=2;i<=k;i++)
		   if(n%i==0)
		     break;
		if(i>k)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
    } 
	return 0;
}

