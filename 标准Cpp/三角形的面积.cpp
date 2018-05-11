#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		double p,s;
		p=(a+b+c)/2.0;
		if((a+b)>c&&(a+c)>b&&(b+c)>a)
		{
		
		    s=sqrt(p*(p-a)*(p-b)*(p-c));
		    printf("%.2lf\n",s);
	}
		else printf("-1\n");
	}
	return 0;
}
