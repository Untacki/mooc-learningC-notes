#include<stdio.h>
int main()
{
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d小时 %d分钟",&hour1,&minute1);
	scanf("%d小时 %d分钟",&hour2,&minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t=t1-t2;
	printf("时间差是%d时%d分钟",t/60,t%60);
	return 0;
 } 
