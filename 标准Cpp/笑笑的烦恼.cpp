#include<stdio.h> 
int main() 
{  
    int n,max,min,score,t;  
    float avg=0; 
	scanf("%d",&t);
	while(t--)
	{ 
	n=0;
	avg=0.0;
	scanf("%d",&score); 
	max=score;
	min=score; 
    while(score!=-1)  
    {   
	    n++;   
        avg=avg+score;   
        if(max<score)      
           max=score;   
        if(min>score)     
           min=score;   
        scanf("%d",&score);    
    }  
    avg=avg/n; 
    printf("%d\n",n);
	printf("%d\n",max);
	printf("%d\n",min);
	printf("%.1f\n",avg);  
    }
    return 0; 
  }
