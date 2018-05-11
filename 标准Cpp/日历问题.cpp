#include<iostream>
using namespace std;

int main()
{
    int week[7]={7,1,2,3,4,5,6},i,n; 
	while((cin>>n))
	{
		n%=7;
		i=week[n];
		cout<<i<<endl;
	}
	return 0;
}
