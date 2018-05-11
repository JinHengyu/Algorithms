
 #include<iostream>
#include<math.h>
using namespace std;
int main()
{
      int i,j,k,m,flag1=0,flag2=0,ans=0,n,p;
      cin>>n;
      for(i=2;i<=n;i++)
     {
        m=sqrt(i);
        for(j=2;j<=m;j++)
            if(i%j==0)
            {
				flag1=0;
				break;
           	}
           	if(j>m)
                flag1=1;
	if(flag1==1)
      	{
           p=i;
           k=0;
           while(p)
           {
           	k=k*10+p%10; 	p=p/10;
           }
           m=sqrt(k);
           for(j=2;j<=m;j++)
                if(k%j==0)
	{
	             flag2=0;    break;
	}
	if(j>m)
	             flag2=1;
      	}
        if(flag1*flag2==1)
              ans++;
    }
    cout<<ans<<endl;
    return 0;
}

