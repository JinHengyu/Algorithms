#include <stdio.h> 
#include <string.h> 
int  b2ten(int x,int b); 
int  main( ) { 
        int p,q,r,n,b; 
        scanf("%d",&n); 
        while(n--){ 
              scanf("%d%d%d",&p,&q,&r); 
              for(b=2;b<=16;b++){ 
                    long p2 = b2ten(p,b); 
                    long q2 = b2ten(q,b); 
                    long r2 = b2ten(r,b); 
                    if(p2==-1 || q2==-1||r2 == -1) continue;
                    if(p2*q2 == r2){ printf("%d\n",b);break; } 
              } 
              if(b==17) printf("0\n"); 
         }  return 0;
} 
int b2ten(int x, int b){ 
        char tmp[100]; 
        int ret = 0; 
        sprintf(tmp,"%d",x); 
        int len = strlen(tmp); 
        for(int i=0; i<len;i++){ 
              if(tmp[i]-'0' >= b) return -1; 
              ret *= b; 
              ret += tmp[i]-'0' ; 
        } 
        return ret; 
} 

