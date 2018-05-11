#include<iostream>
using namespace std;
#include<string.h>
int main(){
  int n, x, y, i = 0;
  int a[10][10];
  cin>>n; 
  memset(a, 0, sizeof(a));
  i = a[x=0][y=0] = 1;
  while(i < n*n)
   {
    while(y+1<n && !a[x][y+1]) a[x][++y] = ++i;
    while(x+1<n && !a[x+1][y]) a[++x][y] = ++i;
    while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++i;
    while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++i;    
  }
  for(x = 0; x < n; x++) {
    for(y = 0; y < n-1; y++) 
    {
	cout<<a[x][y]<<" ";}
	cout<<a[x][n-1]<<endl;
  
  }
  return 0;
}
 
