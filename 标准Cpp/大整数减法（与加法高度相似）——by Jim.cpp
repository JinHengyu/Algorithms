#include<string.h>
#include<stdio.h>
char a[100],b[100];
int c[100],d[100]; 
int main()
{
	int m,n,i,j;
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<=m-1;i++)
	c[i]=a[m-1-i]-'0';
	for(i=0;i<=n-1;i++)
	d[i]=b[n-1-i]-'0';
	for(i=0;i<=99;i++)
	{
		c[i]-=d[i];
		if(c[i]<0)
		{
			c[i]+=10;
			c[i+1]-=1;
		}
	}
	for(i=99;i>=0;i--)
	{
		if(c[i]!=0)
		{j=i;break;}
    }
    for(i=j;i>=0;i--)
    printf("%d",c[i]);
}
