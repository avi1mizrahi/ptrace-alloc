#include <iostream>
#include <cstdint>

#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <sys/mman.h>
#include <assert.h>



using namespace std;

int main()
{
    intptr_t res = (intptr_t)mmap(NULL, 4, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
    assert(res == getpid());
	return 0;
}
