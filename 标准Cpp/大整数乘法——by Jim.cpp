#include<stdio.h>
#include<string.h>
char a[100],b[100];
int c[100],d[100],e[100]; 
main()
{
	int m,n,i,j;
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<=m-1;i++)
	c[i]=a[m-1-i]-'0';
	for(i=0;i<=n-1;i++)
	d[i]=b[n-1-i]-'0';
    for(i=0;i<=n-1;i++)
    for(j=0;j<=m-1;j++)
    {
    	e[i+j]+=c[i]*d[j];
	}
	for(i=0;i<=99;i++)
	{
		e[i+1]+=e[i]/10;
		e[i]%=10;
	}
	for(i=99;i>=0;i--)
	{
		if(e[i]!=0)
		{j=i;break;}
    }
    for(i=j;i>=0;i--)
    printf("%d",e[i]);
} 
