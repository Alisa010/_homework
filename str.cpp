#include "str.h"


int string_length(const char* str){
	unsigned int length = 0;
	while(*(str + length)){
	 	length++;
	}
	return length;	
}

int num_digits(const char* str){
	int digits = 0;
	for(int i = 0; i < string_length(str); ++i){
		if(str[i] >= '0' and str[i] <= '9'){
			++digits;
		}
	}
	return digits;
}


