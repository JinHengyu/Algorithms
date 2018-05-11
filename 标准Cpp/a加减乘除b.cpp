#include<iostream> 
using namespace std;
int main()
{
	int n,a,b;
	char c;
	cin>>n;
	while(n--)
	{
	cin>>a>>c>>b;
	switch(c)
	{
	case '+':cout<<a+b<<endl;break;
	case '-':cout<<a-b<<endl;break;
	case '*':cout<<a*b<<endl;break;
	case '/':cout<<a/b<<endl;
    }}
} 
 
