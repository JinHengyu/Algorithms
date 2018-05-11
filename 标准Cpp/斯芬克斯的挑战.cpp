#include<iostream>
using namespace std;
int a[100]={0},count;
void spilt(int t)
{
	int i;
	int j=t;
	int l=a[j];
	for(i=a[j-1];i<=l/2;i++)
	{
		a[j]=i;
		a[j+1]=l-i;
		spilt(j+1);count++;
	}
}
void spiltnum(int n)
{
	int i;
	for(i=1;i<n/2;i++)
	{
		a[1]=i;
		a[2]=n-i;
		spilt(2);count+=1;
	}
}
int main()
{
	int n;
	while((cin>>n))
   {
   count=0;
   	if(n==3) {
   	cout<<'2'<<endl;}
    if(n!=3){
	spiltnum(n);
	cout<<count+1<<endl;}
   }
	return 0;
}
