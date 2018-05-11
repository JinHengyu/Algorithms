#include <stdio.h>
int type(int );

char w[7][10]={"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

int y[2]={365,366}; 

int m[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,
			31,29,31,30,31,30,31,31,30,31,30,31};
int  main()
{  
	int days, dd;
	int i = 0, j = 0;
	while (scanf("%d", &days) && days != -1) {
	    dd = days % 7;
	    for(i = 2000; days >= y[type(i)]; i++)
		    days -= y[type(i)];
	    for(j = 0; days >= m[ type(i) ][ j ]; j++)
		    days -= m[ type(i) ][ j ];
	    printf("%d-%02d-%02d %s\n",
		 i, j + 1, days + 1, w[dd]);
	}
	return 0;
}
int type(int m){ 
	if(m % 4 != 0 || (m % 100 == 0 && m % 400 != 0))		return  0;  //不是闰年
	else return 1;   // 是闰年
	
}


