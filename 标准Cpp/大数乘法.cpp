#include <iostream>
using namespace std;
#include <string.h>
#define MAX_LEN 200
unsigned a1[MAX_LEN+10];
unsigned a2[MAX_LEN+10];
unsigned aresult[MAX_LEN*2+10];
char szline1[MAX_LEN+10];
char szline2[MAX_LEN+10];
int main(){
	while((cin>>szline1>>szline2))
	{
	int i, j;
	int nlen1=strlen(szline1);
	memset(a1,0,sizeof(a1));
	memset(a2,0,sizeof(a2));
	memset(aresult,0,sizeof(aresult));	
	j=0;
	for(i=nlen1-1;i>=0;i--)
		a1[j++]=szline1[i]-'0';
	int nlen2=strlen(szline2);
	j=0;
	for(i=nlen2-1;i>=0;i --)
		a2[j++]=szline2[i]-'0';
 for(i=0;i<nlen2;i++) {				
	for(j=0;j<nlen1;j ++) 			
		aresult[i+j]+=a2[i]*a1[j]; 	
 }
 int nHighestPos=0;
 for(i=0;i<MAX_LEN *2;i ++ )	{
	if( aresult[i] >= 10 ) {
		aresult[i+1]+=aresult[i]/10;
		aresult[i]%=10;
	}
	if( aresult[i] )
	  nHighestPos=i;
  }
  for(i=nHighestPos;i>=0;i--)
	cout<<aresult[i];
	cout<<endl;
	}
  return 0;
}

