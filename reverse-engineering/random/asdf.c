#include <stdio.h>
#include <sys/mman.h>

void func(long l) { puts("hi"); }

int main() {
    // func = mmap(0LL, 0x10uLL, 7, 0x22, -1, 0LL);
    printf("%02x, %02x\n", *(char*)func, *(char*)(func + 8));
    *(char*)(func + 8) = 0;

    func(12);
}
