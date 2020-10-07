#include <stdio.h>

char *squeeze(char s1, char s2[]) {
	int i, j;

	for (i = j = 0; s2[i] != '\0'; i++) {
		if (s2[i] != s1) {
			s2[j++] = s2[i];
		}
		s2[j] = '\0';
	}

	return s2;
}

int main(int argc, char const *argv[]) {
	char s1 = 'a';
	char s2[] = {'a','b','b','a'};

	printf("%s \n",squeeze(s1,s2));

	return 0;
}