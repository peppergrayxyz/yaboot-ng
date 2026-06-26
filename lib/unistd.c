#include "types.h"

int getpid(void) {
	return 0;
}

int getuid(void) {
	return 0;
}

int geteuid(void) {
	return 0;
}

int getgid(void) {
	return 0;
}

int getegid(void) {
	return 0;
}

int gethostname(char *name, size_t size) {
    if(size > 0) name[0] = '\0';
    return 0;
}
