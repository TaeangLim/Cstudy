#include <stdio.h>

int main(){
	
	int a, i;
	char st[21];
	
	scanf("%d\n",&a);
	char *pts;
	for(i=0; i<a; i++){
		printf("%d\n", i);
		int x,j;
		scanf("%d %s\n",&x,&st);
		printf("%d, %s\n", x, st);
		for(j=0; j<x; j++){
			printf("%d\n", j);
			pts=st;
			int m;
			for(m=0; m<x; m++){
				printf("%d\n", m);
				printf("%p\n",(pts+j));
			
			}	
		}
	}
	
	return 0;
}
