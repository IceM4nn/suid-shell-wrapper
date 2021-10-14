#include <stdlib.h>
#include <unistd.h>
int main(int argc, char ** const argv) {
	setgid(0); setuid(0);
	system(argv[1]);
	return 0;
}