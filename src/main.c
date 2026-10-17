#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "%s:无效参数数量", argv[0]);
	}
	
	printf("  .global main\n");
	printf("main:\n");
	printf("  mov $%d, %%rax\n", atoi(argv[1]));
	printf(  "ret\n");
	return 0;
}