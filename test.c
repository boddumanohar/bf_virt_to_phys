#include<stdio.h>
#include<stdlib.h>


int main()  {

	void *buffer = malloc(4096);

	printf("Doing vmcall\n");
	asm("movq %0, %%rdi"
		:
		:"a"(buffer)
		:"rdi"
	);

	asm("vmcall");

	printf("done\n");
}

