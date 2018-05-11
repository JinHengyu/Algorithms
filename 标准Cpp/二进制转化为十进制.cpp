#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
	char a[32];
	int i,result=0,p,b;
	cin>>a;
	b=strlen(a);
	for(i=0;i<strlen(a);i++)
	{
		p=pow(2,(b-i-1));
		result+=(a[i]-'0')*p;
	}
	cout<<result<<endl;
	return 0;
}
