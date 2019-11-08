#include <iostream>
static class temp
{
public:
	temp(){
		printf("Calling c-tor");printf("\n");
	}
	~temp(){
		printf("Calling d-tor");printf("\n");
	

	}
	
}lss  __attribute__ ((init_priority (1000)));  ///0150;

int main(int argc,char **argv){

return 0;
}