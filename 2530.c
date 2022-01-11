#include <stdio.h>

int main(){
	
	int hour, min,sec, tak;
	scanf("%d %d %d\n", &hour, &min,&sec);
	scanf("%d", &tak);
	int c;
	c=tak/3600;
	hour=hour+c;
	min=min+((tak%3600)/60);
	sec=sec+((tak%3600)%60);
	min=min+(sec/60);
	hour=hour+(min/60);
	hour=hour%24;
	min=min%60;
	sec=sec%60;
	
	printf("%d %d %d",hour,min,sec);
	return 0;
}
