#include<iostream>
using namespace std;
#include<string.h>
int main()
{
int n,i,j;
cin>>n;
char temp[100],name[n][100];
for(i=0;i<n;i++ )
{
	cin>>name[i];
}
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(strcmp(name[j],name[j+1])>0)
		{
			strcpy(temp,name[j]);
		    strcpy(name[j],name[j+1]);
			strcpy(name[j+1],temp);
		}
	}
}
for(i=0;i<n;i++)
{
	if(strcmp(name[i],"China")!=0)
	cout<<name[i]<<endl;
}
cout<<"China"<<endl;
return 0;
}


