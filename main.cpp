/*hello world project*/

#include <iostream>

int main(int argc, char *argv[]){
	char* hello_world_str = new char[17];
	hello_world_str[0] = 'h';
	hello_world_str[1] = 'e';
	hello_world_str[2] = 'l';
	hello_world_str[3] = 'l';
	hello_world_str[4] = 'o';
	hello_world_str[5] = ' ';
	hello_world_str[6] = 'w';
	hello_world_str[7] = 'o';
	hello_world_str[8] = 'r';
	hello_world_str[9] = 'l';
	hello_world_str[10] = 'd';
	hello_world_str[11] = ' ';
	hello_world_str[12] = 'f';
	hello_world_str[13] = 'r';
	hello_world_str[14] = 'o';
	hello_world_str[15] = 'm';
	hello_world_str[16] = ' ';
	std::cout << hello_world_str << argv[0] << '\n';
	return 0;
}
