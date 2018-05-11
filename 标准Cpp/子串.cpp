#include <stdio.h>
#include <string.h>
int t,n;
char a[100][101];
int search(char* source) {
	int subStrLen = strlen(source),   sourceStrLen = strlen(source);
	int i, j;  bool found;
	char subStr[101], revSubStr[101];
	while ( subStrLen > 0 ) {
		for (i = 0; i <= sourceStrLen - subStrLen; i++) {
			strncpy(subStr, source+i, subStrLen);
			strncpy(revSubStr, source+i, subStrLen);
			subStr[subStrLen] = revSubStr[subStrLen] = '\0'; 
			_strrev(revSubStr);   found = true;
			for( j = 0; j < n; j++)  
			      if ( strstr(a[j], subStr) == NULL && strstr(a[j], revSubStr) == NULL ) 
				  {
					found= false;
					break;
		         }
			if (found)  return subStrLen;
		}
		subStrLen--;
	}  
	return 0;
}
int main()  {
	int i, minStrLen, subStrLen;
	char minStr[101];
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		minStrLen = 100; 
		for (i = 0; i < n; i++) {
			scanf("%s",&a[i]);
			if ( strlen(a[i]) < minStrLen ) {
				strcpy(minStr, a[i]);
				minStrLen = strlen(minStr);
			}
		}
		subStrLen = search(minStr);
		printf("%d\n",subStrLen);		
	} return 0;
}


