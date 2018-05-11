#include<iostream> 
using namespace std; 
int main() 
{ 
 int n; 
 cin>>n; 
 while(n--) 
 { 
 int a,b,r,i; 
 cin>>a>>b; 
 i=a*b; 
 do{r=a%b; 
 a=b; 
 b=r; 
 }while(r!=0); 
 cout<<i/a<<endl; 

 } 
 return 0; 
}
