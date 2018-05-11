#include <iostream>
#include <string.h>
using namespace std;
int main()   {
	char kk[300];
	while( cin.getline(kk,210) ) {
		if( strcmp( kk,"ENDOFINPUT") == 0)  break;
		cin.getline(kk,210);
		for( int i = 0; kk[i]; i ++ ) 
			if( kk[i] >= 'A' && kk[i] <= 'Z' ) {
				kk[i] -= 5;
				if( kk[i] < 'A' )
		 		  kk[i] = 'Z' - ('A' - kk[i])  + 1;
			}
		cout << kk;   cout << endl;
		cin.getline(kk,210);
	} 	return 0;
}

