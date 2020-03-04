#include <stdio.h>

int main(int argc, char *argv[]){
	char c = 65;
	int i = 65;

	printf("%c\t%d\t%d\n", c, c, sizeof(c));
	printf("%c\t%d\t%d\n", i, i, sizeof(i));

	return 0;

}
