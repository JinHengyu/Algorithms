#include <stdio.h>
#include <string.h>
#define MAX_LEN 110
int an1[MAX_LEN];
int an2[MAX_LEN];
char szLine1[MAX_LEN];
char szLine2[MAX_LEN];
int Substract( int nMaxLen, int * an1, int * an2)
{ //�������nMaxLenλ�Ĵ�����an1��ȥan2, an1��֤����an2
	int nStartPos = 0;
	for( int i = 0;i < nMaxLen ; i ++ ) {	
		an1[i] -= an2[i];  //��λ��
		if( an1[i] < 0 ) { //���Ƿ�Ҫ��λ
			an1[i] += 10;
			an1[i+1] --; //��λ
		}
		if( an1[i] !=0 )
			nStartPos = i; //��¼���λ��λ��
	}
	return nStartPos; //����ֵ�ǽ���������λ��λ��
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n -- ) {
		scanf("%s", szLine1);
		scanf("%s", szLine2);
		int i, j;
		memset( an1, 0, sizeof(an1));	
		memset( an2, 0, sizeof(an2));
		//���潫szLine1�д洢���ַ�����ʽ������ת����an1��ȥ��
		//an1[0]��Ӧ�ڸ�λ
		int nLen1 = strlen( szLine1);
		for(j = 0, i = nLen1 - 1;i >= 0 ; i --)
			an1[j++] = szLine1[i] - '0';	
		int nLen2 = strlen(szLine2);
		for( j = 0, i = nLen2 - 1;i >= 0 ; i --)
			an2[j++] = szLine2[i] - '0';
		int nStartPos = Substract( MAX_LEN, an1,an2);
		for( i = nStartPos; i >= 0; i -- ) 
			printf("%d", an1[i]);
		printf("\n");
	}
    return 0;
}

