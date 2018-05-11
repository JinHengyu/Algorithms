#include <stdio.h>
#include <string.h>
#define qq 201
int an1[qq+10];
int an2[qq+10];
char kk1[qq+10];
char kk2[qq+10];
int Add(int nMaxLen , int * an1, int * an2)
{
	int nHighestPos = 0;    
	for(int i = 0;i < nMaxLen; i ++ ) {	
		an1[i] += an2[i];		
		if( an1[i] >= 10 ) {		
			an1[i] -= 10;
			an1[i+1] ++;	
		}
		if( an1[i] !=0 )
			nHighestPos = i; 
	}
	return nHighestPos;
}
int main()   {
	scanf("%s", kk1);  scanf("%s", kk2);
	int i, j;
	memset( an1, 0, sizeof(an1));	
	memset( an2, 0, sizeof(an2));
	int nLen1 = strlen(kk1);
	for(j =0, i = nLen1 - 1;i >= 0 ; i --)
		an1[j++] = kk1[i] - '0';	
	int nLen2 = strlen(kk2);
	for(j=0, i = nLen2 - 1;i >= 0 ; i --)
		an2[j++] = kk2[i] - '0';
	int nHighestPos = Add(qq,an1,an2);	
	for( i = nHighestPos; i >= 0; i -- )  printf("%d", an1[i]);
	return 0;
}

