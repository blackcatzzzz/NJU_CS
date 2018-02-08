#include <stdio.h>

// 32位，64位下编译不同，c90 c99编译也不同，注意只是c程序，不是c++程序，即.c不是.cxx
int main()
{
	int i = -2147483648;
	long long l = -2147483648;
	printf("i = %d = %u = %#x\n", i, i, i);
	printf("l = %lld = %llu = %#llx\n", l, l, l);

	if(-2147483648 < 2147483647)
		printf("-2147483648 < 2147483647 is true\n");
	else
		printf("-2147483648 < 2147483647 is false\n");

	int size = sizeof(-2147483648);

	printf("sizeof(-2147483648) = %d\n", size);

	if(size == 4)
		printf("-2147483648 = %d = %u = %#x\n", -2147483648);
	else if(size == 8)
		printf("-2147483648 = %lld = %llu = %#llx\n", -2147483648);

	return 0;
}
