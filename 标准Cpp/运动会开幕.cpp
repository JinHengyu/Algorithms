
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
	int i,j;
	while((cin>>n)){
	struct contury temp,con[n];
	for(i=0;i<n;i++)
	cin>>con[i].num>>con[i].name>>con[i].people>>con[i].area;
    for(i=0;i<n-1;i++)
	 for(j=0;j<n-i-1;j++)
		if(strcmp(con[j].name,con[j+1].name)>0)
		{
		    temp=con[j];
			con[j]=con[j+1];
			con[j+1]=temp;
		}
	for(i=0;i<n;i++)
	cout<<con[i].num<<" "<<con[i].name<<" "<<con[i].people<<" "<<con[i].area<<endl;}
	return 0;
}
