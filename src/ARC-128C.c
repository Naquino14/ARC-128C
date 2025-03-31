#include "ARC-128C.h"
#include <stdio.h>

// Include lookup table
#include "ARC-128CLT.h"

// Magic numbers
// Key Scheduling Round Constant(s)
#define MAGIC_KSRCON1 0x05
#define MAGIC_KSRCON2 0x07
#define MAGIC_KSRCON3 0x0A
#define MAGIC_KSRCON4 0x3D
#define MAGIC_KSRCON5 0x4F
#define MAGIC_KSRCON6 0x5D
#define MAGIC_KSRCON7 0xAB
#define MAGIC_KSRCON8 0xEF
#define MAGIC_KSRCON9 0xAB

static const uint8_t P_MAGICKSRCON[9] = {
    MAGIC_KSRCON1, 
    MAGIC_KSRCON2, 
    MAGIC_KSRCON3, 
    MAGIC_KSRCON4, 
    MAGIC_KSRCON5, 
    MAGIC_KSRCON6, 
    MAGIC_KSRCON7, 
    MAGIC_KSRCON8, 
    MAGIC_KSRCON9
};

int arc128_encrypt(uint8_t iv[ARC128C_BLOCK_SIZE], uint8_t key[ARC128C_KEY_SIZE], uint8_t* message, uint8_t* data) {
  return 0;
}

int arc128_decrypt(uint8_t iv[ARC128C_BLOCK_SIZE], uint8_t key[ARC128C_KEY_SIZE], uint8_t* data, uint8_t* message) {
  return ARC128C_SUCCESS;
}
