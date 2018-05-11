#include<stdio.h>
#include<string.h>
int k[15][15];
int main()
{
	int n;
	while(~scanf("%d",&n)) 
	{
		memset(k,0,sizeof(k));
		int i = 0,j = 0,s = 1;
		int x = 0,y = 0,a = n - 1,b = n - 1;
		while(s <= n*n)
		{
			for(j = y;j <= b;j++)
			{
				k[i][j] = s++;
			}
			x++;
			j--;
			if(j == b && s <= n*n)
			{
				for(i = i + 1;i <= a;i++)
				{
					k[i][j] = s++;
				}
			}
			else break;
			b--;
			i--;
			if(i == a && s <= n*n)
			{
				for(j = j-1;j >= y;j--)
				{
					k[i][j] = s++;
				}
				a--;
			}
			else break;
			j++;
			if(j == y && s <= n*n)
			{
				for(i = i - 1;i >= x;i--)
				{
					k[i][j] = s++;
				}
				y++;
			}
			else break;
			i++;
		}
		for(i = 0;i < n;i++)
		{
			for(j = 0;j < n;j++)
			{
				if(!j)
					printf("%d",k[i][j]);
				else
					printf(" %d",k[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

