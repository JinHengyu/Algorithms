
#include<iostream>
#include<string.h>
using namespace std;
struct contury{
	int num;
	char name[20];
	int people;
	char area [20];
}con;
int main()
{
	int n;
	while((cin>>n)){
	int i,j;
	struct contury temp1,con[n],temp2;
	for(i=0;i<n;i++)
	cin>>con[i].num>>con[i].name>>con[i].people>>con[i].area;
    for(i=0;i<n-1;i++)
	 for(j=0;j<n-i-1;j++)
		if(strcmp(con[j].name,con[j+1].name)>0)
		{
		    temp1=con[j];
			con[j]=con[j+1];
			con[j+1]=temp1;
		}
	for(i=0;i<n;i++)
	{
		if(strcmp(con[i].name,"China")==0)
		  temp2=con[i];
		else
		{
	        cout<<con[i].num<<" "<<con[i].name<<" "<<con[i].people<<" "<<con[i].area<<endl;
	    }
    }
    cout<<temp2.num<<" "<<temp2.name<<" "<<temp2.people<<" "<<temp2.area<<endl;}
	return 0;
}
