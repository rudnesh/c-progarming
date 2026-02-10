#include<stdio.h>
int main(){
	int g,y,r;
	int t;
	scanf("%d %d %d",&g,&y,&r);
	scanf("%d",&t);
	int cycle =g+y+r;
	int time=t%cycle;
	int wait_time;
	if(time<g){
		wait_time=0;
	
	}
	else if ((g+y)-time){
		wait_time=(g+y)-time;
	
	}
	else{
	
		wait_time=cycle-time;

	}
	printf("%d\n",wait_time);
	return 0;




}
