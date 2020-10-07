#include <stdio.h>
#include <limits.h>

//char, short, int, long... signed and unsigned

int main(int argc, char const *argv[])
{
	printf("char signed: %d, unsigned: %d; short signed: %d, unsigned: %d; int signed: %d, unsigned: %d; long signed: %ld, unsigned: %ld\n", CHAR_MAX, UCHAR_MAX, SHRT_MAX, USHRT_MAX, INT_MAX, UINT_MAX, LONG_MAX, ULONG_MAX);
	return 0;
}