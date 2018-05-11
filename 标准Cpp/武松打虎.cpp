#include<iostream>
using namespace std;
int main()
{
	long n,t,i,j,k,sum,count,temp;
    long a[n];
    while((cin>>n>>t)){
    sum=0;count=0;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum>t) break;
		else count++;
	}
	cout<<count<<endl;
}
return 0;
}

