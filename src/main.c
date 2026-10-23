#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "%s:无效参数数量", argv[0]);
	}
	
	char *p = argv[1];
	printf("  .global main\n");
	printf("main:\n");
	printf("  mov $%ld, %%rax\n", strtol(p, &p, 10));
	
	while (*p)
	{
		if (*p == '+')
		{
			p++;
			printf("  add $%ld, %%rax\n", strtol(p, &p, 10));
			continue;
		}
		if (*p == '-')
		{
			p++;
			printf("  sub $%ld, %%rax\n", strtol(p, &p, 10));
			continue;
		}
		fprintf(stderr, "无法识别的字符: '%c\n", *p);
		return 1;
	}
	printf("  ret\n");
	return 0;
}