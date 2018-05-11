#include <stdio.h>
#include <string.h>
#define MAX_LEN 201
int an1[MAX_LEN+10];
int an2[MAX_LEN+10];
char szLine1[MAX_LEN+10];
char szLine2[MAX_LEN+10];
int Add(int nMaxLen , int * an1, int * an2)
   //���������Ϊ nMaxLen �Ĵ����� an1��an2 ��ӣ��������an1, 
   //an1[0],an2[0]��Ӧ�ڸ�λ
{
	int nHighestPos = 0;    //���λ��λ��
	for(int i = 0;i < nMaxLen; i ++ ) {	
		an1[i] += an2[i];		//��λ���
		if( an1[i] >= 10 ) {		//���Ƿ�Ҫ��λ	
			an1[i] -= 10;
			an1[i+1] ++;	//��λ
		}
		if( an1[i] !=0 )
			nHighestPos = i; //��¼���λ��λ��
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

