# strtoint
A small code to convert char * to int in the C programming language.


# Example

#include <assert.h>
#include "strtoint.h"

int main(void) {
	assert(strtoint("290343") == 290343);
	assert(strtoint("656421") == 656421);
	assert(strtoint("15") == 15);
	assert(strtoint("0") == 0);
	assert(strtoint("10") == 10);
	return 0;
}
