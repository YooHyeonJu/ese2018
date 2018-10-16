#include "func1.h"
#include <stdio.h>

void preprocess()
{
	printf("do some preprocessing\n");
}

void postprocess()
{
	printf("do some postprocessing\n");
}

int main(void)
{
	preprocess();
	foo1();
	foo2();
	postprocess();
	return 0;
}
