for(i=0;i<n-1;i++)
{
	for(j=0;j<n-1-i;j++)
	{
		if(x[j+1]>x[j])
		{
			t=x[j];
			x[j]=x[j+1];
			x[j+1]=t;
		}
	}
}冒泡 
for(i=0;i<n-1;i++)
{
	k=i;
	for(j=i+1;j<n;j++)
	{
		if(strcmp(name[j],name[k])<0)
		   k=j;
		if(k!=i)
		{
			temp=name[i];
			name[i]=name[k];
			name[k]=temp;
		}
	}
}选择
char *binary(char *ptr[],char *str,int n)
{
	int hig,low,mid;
	low=0;
	hig=n-1;
	while(low<=hig)
	{
		mid=(low+hig)/2;
		if(strcmp(str,ptr[mid])<0)
		  hig=mid-1;
		else if(strcmp(str,ptr[mid])>0)
		    low=mid+1;
		else return(str);
	}
} 二分查找 
