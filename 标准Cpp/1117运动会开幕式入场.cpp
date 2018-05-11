
#include<stdio.h>
#include<string.h>
#include<malloc.h>

char *arr[100];
int n;

void input()
{
	int i;
	
	scanf("%d",&n);
	i = 0;
	while( i<n )
	{
		arr[i] = (char *)malloc(20);
		scanf("%s",arr[i]);
		i++;
	}	
}

void deleChina()
{
	int i,j;
	char str[] = "China";
	char *p = str;
	
	for ( i=0;i<n-1;i++ )
	{
		if( (*arr[i]) == (*p))
		{
			for (j=i;j<n-1;j++)
			{
				arr[j] = arr[j+1];	
			}
		}
	}
}

void sort()
{
	int i,j;
	char *temp;
	for (i=0;i<n-2;i++)
	{
		for(j=0;j<n-i-2;j++)
		{
			if ( strcmp(arr[j],arr[j+1]) > 0 )
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void output()
{
	int i;
	for(i = 0; i<n-1 ; i++)
	{
		printf(arr[i]);
		printf("\n");
	}
	printf("China\n");
}

main()
{
	input();
	deleChina();
	sort();
	output();
	return 0;
}
