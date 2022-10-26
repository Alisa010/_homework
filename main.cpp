#include <iostream>
#include "str.h"

int main(int argc, char** argv){
	for(int i = 1; i < argc; i++){
		std::cout << string_length(argv[i]) << " " << num_digits(argv[i]) << std::endl;
	}
}
