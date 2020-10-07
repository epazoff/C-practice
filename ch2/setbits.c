#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	unsigned x1, y1;
	x1 = x & ((~0 << p) & (~0 << (p+1-n)));
	y1 = ((y >> (p+1-n)) & (~(~0 << n))) << (p+1-n);

	printf("%d, %d, %d\n", x1,y1,(x1&y1));
	return x1 & y1;
}

int main(int argc, char const *argv[]) {

	unsigned x, y;
	int p, n;

	x = 0x0011;
	y = 0x0011;

	p=3;
	n=2;

	setbits(x,p,n,y);

	printf("x: %d, y: %d, p: %d, n: %d, result: %d\n",x,y,p,n,setbits(x,p,n,y));

	return 0;
}