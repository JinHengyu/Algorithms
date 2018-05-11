#include <stdio.h>
#include <string.h>
#define MAX_LEN 201
int an1[MAX_LEN+10];
int an2[MAX_LEN+10];
char szLine1[MAX_LEN+10];
char szLine2[MAX_LEN+10];
int Add(int nMaxLen , int * an1, int * an2)
   //将长度最多为 nMaxLen 的大整数 an1和an2 相加，结果放在an1, 
   //an1[0],an2[0]对应于个位
{
	int nHighestPos = 0;    //最高位的位置
	for(int i = 0;i < nMaxLen; i ++ ) {	
		an1[i] += an2[i];		//逐位相加
		if( an1[i] >= 10 ) {		//看是否要进位	
			an1[i] -= 10;
			an1[i+1] ++;	//进位
		}
		if( an1[i] !=0 )
			nHighestPos = i; //记录最高位的位置
	}
	return nHighestPos;
}
int main()   
{
	while((scanf("%s", szLine1)!=EOF)&&(scanf("%s", szLine2)!=EOF))
	{
	 int i, j;
	memset( an1, 0, sizeof(an1));	
	memset( an2, 0, sizeof(an2));
	int nLen1 = strlen( szLine1);
	for(j =0, i = nLen1 - 1;i >= 0 ; i --)
		an1[j++] = szLine1[i] - '0';	
	int nLen2 = strlen(szLine2);
	for(j=0, i = nLen2 - 1;i >= 0 ; i --)
		an2[j++] = szLine2[i] - '0';
	int nHighestPos = Add(MAX_LEN,an1,an2);	
	for( i = nHighestPos; i >= 0; i -- )  printf("%d", an1[i]); printf("\n");}
	return 0;
}

