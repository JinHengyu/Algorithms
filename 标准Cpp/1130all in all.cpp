#include <stdio.h>
char s[100010];
char t[100010];
int main()
{
	int i,j;
	while (scanf( "%s%s",s,t) > 0 ) {
		for( i = 0,j = 0 ; s[i] && t[j]; j ++ ) {
			if( t[j] == s[i] )
				i ++;
		}
		if ( s[i] == 0)  // ¡®\0¡¯ µÄAscii Âë¾ÍÊÇ 0
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

