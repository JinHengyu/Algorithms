#include<stdio.h>
#include<string.h>
int main(){
	int n,a[200];
	while(scanf("%d",&n)!=EOF){
		memset(a,0,sizeof(a));
		a[0]=1;
		int i=0;
		while(n){
			for(i=0;i<200;i++){
				a[i]*=n;
			}
			for(i=0;i<200;i++){
				a[i+1]+=a[i]/10;
				a[i]%=10; 
			}
			n--;
		}
		int l=199;
		while(a[l]==0)l--;
		printf("%d\n",l+1);
	}
	return 0;
}

