#include <openssl/md5.h>
#include <stdio.h>
#include <string.h>

void printBytes(const char* buffer, int length) {
    for (int i = 0; i < length; i++) {
        printf("%02x ", (unsigned char)buffer[i]);
    }
    printf("\n");
}

int main() {
    for (int i0 = -128; i0 < 128; i0++) {
        for (int i1 = -128; i1 < 128; i1++) {
            for (int i2 = -128; i2 < 128; i2++) {
                for (int i3 = -128; i3 < 128; i3++) {
                    MD5_CTX ctx;
                    MD5_Init(&ctx);
                    char buf[12] = "\x00\x00\x00\x00GpLaMjEW";
                    sprintf(&buf, "%c%c%c%c", (char)i0, (char)i1, (char)i2,
                            (char)i3);
                    MD5_Update(&ctx, &buf, 12);
                    char final[16];
                    MD5_Final(&final, &ctx);
                    if (buf[8] == (char)0x07 && buf[9] == (char)0xB3 &&
                        buf[10] == (char)0xDC && buf[11] == (char)0x26) {
                        printf("%c %c %c %c", (char)i0, (char)i1, (char)i2,
                               (char)i3);
                    }
                }
            }
        }
    }

    return 0;
}

// f8 96
