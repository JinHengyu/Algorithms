#include<stdio.h>
#include<math.h>
double fun(int x,int y,int z);
int main()
{
	int a,b,c;
	double g;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF)
	{
		if((a+b>c)&&(a+c>b)&&(b+c>a))
		{
			g=fun(a,b,c);
			printf("%.2f\n",g);
			
		}
		else
		printf("-1\n");
	}
	return 0;
}
double fun(int x,int y,int z)
{
	double s;
	int p;
	p=(x+y+z)/2;
	s=p*(p-x)*(p-y)*(p-z);
	s=sqrt(s);
	return s;
}







