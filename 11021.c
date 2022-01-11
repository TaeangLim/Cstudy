#include <stdio.h>

int main(){
	
	int a, i, x, y;
	
	scanf("%d\n", &a);
	
	for (i=0; i<a; i++){
		scanf("%d %d", &x, &y);
		printf("Case #%d: %d\n", i+1, x+y);

	}
	
	return 0;
}

