#include<iostream>
using namespace std;
int main()
{
 int n,i,j;
 cin>>n;
 int a[n];
 if(n%2!=0)
 {
 for(i=0;i<n;i++)
 {
	cin>>a[i];
 }
 cout<<a[(n-1)/2]<<endl;}
 return 0;
}
 
