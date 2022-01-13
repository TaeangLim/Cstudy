#include <stdio.h>

int main(){
	
	int a, i;
	char st[21];
	
	scanf("%d",&a);
	char *pts;
	for(i=0; i<a; i++){
		int x,j;
		scanf("%d %s",&x,&st);
		for(j=0; j<x; j++){
			pts=st;
			int m;
			for(m=0; m<x; m++){
				printf("%p",(pts+j));
			
			}	
		}
	}
	
	return 0;
}
