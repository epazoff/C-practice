#include <stdio.h>
#include <ctype.h>

int htoi(char s[]) {

	int i, n, c;

	n=0;
	
	if(s[0]=='0' && tolower(s[1]=='x')) {
		c=2;
	} else {
		c=0;
	}

	for (i=c; (s[i] >= '0' && s[i] <= '9') || (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f'); i++) {
		if(s[i] >= '0' && s[i] <= '9') {
			n = 16*n + (s[i] - '0');
		} else {
			n = 16*n + 10 + (tolower(s[i]) - 'a');
		}
	}

	return n;

}

int main(int argc, char const *argv[])
{
	char s[] = {'0','x','1','f','\0'};
	for(int i = 0; s[i] != '\0'; i++) {
		printf("%c",s[i]);
	}
	printf(", %d\n",htoi(s));
	return 0;
}