#include <openssl/md5.h>
#include <stdio.h>

void printBytes(const char* buffer, int length) {
    for (int i = 0; i < length; i++) {
        printf("%02x ", (unsigned char)buffer[i]);
    }
    printf("\n");
}

int main() {
    char* test = "asdf";
    char buf[16];

    for (int i = 0; i < 16; i++) {
        buf[i] = 0;
    }

    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, test, 4);
    MD5_Final(&buf, &ctx);

    printBytes(&buf, 16);

    return 0;
}
