#include<iostream>
using namespace std;
main()
{
	int x[100];
	int max,i=0,n;
	cin>>n;
	while(n--)
	{
		cin>>x[i++];
	}
	max=x[n];
	for(n=0;n<i-1;n++)
	{
		if(x[n+1]>max)
		max=x[n+1];
	}
	cout<<max<<endl;
}

