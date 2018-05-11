#include<iostream> 
#include<stdlib.h> 
using namespace std; 
int main() 
{ 
 int n; 
 cin>>n; 
 while(n--) 
 { 
 int a,b,c,r,i; 
 cin>>a>>b>>c; 
 do{r=a%b; 
 a=b; 
 b=r; 
 }while(r!=0); 
 do{r=c%a; 
 c=a; 
 a=r; 
 }while(r!=0); 
 cout<<c<<endl;} 
 return 0;}
