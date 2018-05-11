#include<iostream>
using namespace std;
int leap(int year)
{
	if((year%4==0&&year%100!=0)||(year%400==0))
	return 1;
	else return 0;
}
int main()
{
	int month,year;
	while((cin>>year>>month))
	{
	if(month!=2)
	{
	switch(month) 
	{  
	    
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:cout<<"31"<<endl; break;
		case 4:
		case 6:
		case 9:
		case 11:cout<<"30"<<endl; break;}
	}
	else if(leap(year)!=0) cout<<"29"<<endl;
	     else cout<<"28"<<endl;
	}
	return 0;
}
