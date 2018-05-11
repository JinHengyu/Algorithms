#include <iostream>
using namespace std;
#include <string.h>
#define MAX_LEN 110
int an1[MAX_LEN];
int an2[MAX_LEN];
char szline1[MAX_LEN];
char szline2[MAX_LEN];
int substract( int nMaxLen, int * an1, int * an2)
{ 
	int nStartPos = 0;
	for( int i = 0;i < nMaxLen ; i ++ ) {	
		an1[i] -= an2[i];  
		if( an1[i] < 0 ) { 
			an1[i] += 10;
			an1[i+1] --; 
		}
		if( an1[i] !=0 )
			nStartPos = i; 
	}
	return nStartPos; 
}
int main()
{
        int i, j;
	    while((cin>>szline1>>szline2)){
		memset( an1, 0, sizeof(an1));	
		memset( an2, 0, sizeof(an2));
		int nlen1 = strlen( szline1);
		for(j = 0, i = nlen1 - 1;i >= 0 ; i --)
			an1[j++] = szline1[i] - '0';	
		int nlen2 = strlen(szline2);
		for( j = 0, i = nlen2 - 1;i >= 0 ; i --)
			an2[j++] = szline2[i] - '0';
		int nStartPos = substract( MAX_LEN, an1,an2);
		for( i = nStartPos; i >= 0; i -- ) 
			cout<<an1[i];
			cout<<endl;
			}
    return 0;
}

