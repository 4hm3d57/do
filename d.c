#include <stdio.h>

const char* message = "Hello world!\n";

int main(){
	fputs(message, stdout);
	return 0;
}

