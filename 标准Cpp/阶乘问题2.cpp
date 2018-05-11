#include <iostream>
using namespace std;
#define pi 3.141592657
#include<math.h>
int main()
{
    int n;
    while((cin>>n)&&(n!=0))
    {  if(n==1)
	  cout<<"1"<<endl;
	  else
    cout<<(int)(ceil((n*log(n)-n+0.5*log(2*n*pi))/log(10)))<<endl;
    } 
    return 0;
}

