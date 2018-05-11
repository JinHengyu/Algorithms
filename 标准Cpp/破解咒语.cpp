#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char a[300],b[300],temp;
	int flag,n,i,j,k;
	while((cin>>a))
	{
		k=0;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(i==j)
			  continue;
			if(a[i]==a[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
	      b[k++]=a[i];
	}
	for(i=0;i<k;i++)
	{
		for(j=i;j<k;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		} 
	}
	for(i=0;i<k;i++)
	{
		cout<<b[i];
	}
	cout<<endl;
    }
    return 0;
}
