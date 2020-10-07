#include <stdio.h>

/* Write a program detab that replaces /t with the correct number of blanks n */

#define MAXLINE 1000 //max line length of 1000, for array sizing
#define TABBLANKS 8 //one tab == 8 blanks

void detab(void);

int main (void) {
	detab();
}

void detab() {
	int c;
	char line[1000];

	while ((c=getchar()) != EOF) {
		if (c == '\t') {
			for(int i=0; i<TABBLANKS; i++) {
				putchar(' ');
			}
		} else {
			putchar(c);
		}
	}
}