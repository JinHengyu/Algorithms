#include <iostream>
using namespace std;
int main()
{
	int a[10001]={0},i,j,L,m,x,y;
	while(cin >> L >> m)
    {
		while(m--)
       {
			cin >> x >>y;
			for(i=x;i<=y;i++)
			     a[i] = 1;	
		}
		j = 0;
		for(i=0;i<=L;i++)
		       if(a[i] != 1)         
		           j++;
		cout << j <<endl;
	}
	return 0;
}

