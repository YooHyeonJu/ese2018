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

void turbo_on()
{
	printf("turbo on\n");
}

void turbo_off()
{
	printf("turbo off\n");
}


int main(void)
{
	preprocess();
	turbo_on();
	foo1();
	foo2();
	turbo_off();
	postprocess();

	return 0;
}
