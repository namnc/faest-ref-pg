#include "../vc.c"
#include "../fields.h"

int main(void) {
  
    key128_t key_128  = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
                        0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};

    bf8_t iv[16] = {0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00,
                    0x00, 0x00, 0x00, 0x00};

    vec_com_t out;
    out = vector_commitment(1,128,key_128, iv);

    return 0;
}