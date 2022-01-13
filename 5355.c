#include <stdio.h>
#include <math.h>

int main(){
	
	int a,i;
	scanf("%d",&a);
	float x,y,z;
	for(i=0; i==a; i++){
		scanf("%f", &x);
		while(1){
			char k;
			scanf("%s\t", &k);
			if (k==&" "){
				printf("焼馬馬馬たたた馬");
			}
			printf("%s",k);
			if (k==&"@"){
				x=x*3;
				printf("%.2f",x);
			}
			else if (k==&"%"){
				x=x+5;
				printf("%.2f",x);
			}
			else if (k==&"#"){
				x=x-7;
				printf("%.2f",x);
			}
			else{
				break;
			}
		}
	}
	
	return 0;
}
