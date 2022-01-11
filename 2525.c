#include <stdio.h>

int main(){
	
	int hour, min, tak;
	scanf("%d %d\n", &hour, &min);
	scanf("%d", &tak);
	hour=hour+(tak/60);
	min=min+(tak%60);
	hour=hour+(min/60);
	hour=hour%24;
	min=min%60;
	
	printf("%d %d",hour,min);
	return 0;
}
