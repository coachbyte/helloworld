/*hello world project*/

#include <iostream>
#include "delete_range.h"

int main(int argc, char *argv[]){
	const char* hello_world_str;
	hello_world_str = "hello world from ";
	std::cout << hello_world_str << argv[0] << '\n';
	return 0;
}
