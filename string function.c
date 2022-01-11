#include <stdio.h>
#include <string.h>

int mystrlen(char* arr){
	int counter = 0;
	char* cp = arr;
	while(*cp = '\0'){
		counter++;
		cp++;
	}
}

char* mystrcat1(char* str1, char* str2){
	strcpy(str1 + strlen(str1), str2);
	return str1;
}

char* mystrcat2(char* str1, char* str2){
	
	int horse=0;
	while(*(str1+horse) != '\0'){
		horse++;
	}
	
	int horse2=0;
	while (*(str2+horse2)!=0){
		*(str1+horse+horse2) = *(str2+horse);			
		horse2++;
	}
		
	*(str1+horse+horse2)= '\0';
	return str1;
}

int mystrcmp(char* str1, char* str2){
	while(*st1 == *str2){
		if(*str1 == '\0' || *str2 == '\0'){
			break;
		}
		str1++;
		str2++;
	}
	
	if(*str1 =='\0' && *str2 == '\0'){
		return 0;
	}
	else{
		return -1;
	}
}

int main(){
	
	return 0;
}
