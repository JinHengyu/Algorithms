#include<iostream> 
using namespace std;
int main()
{int n,i=0;
int x[100]; 
cin>>n;
while(n--)
{
 cin>>x[i++];
}i/=2;
cout<<x[i]<<endl;
return 0;}

