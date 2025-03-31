#ifndef ARC128C_H
#define ARC128C_H

#include <stdint.h>
#include <stdbool.h>

#define ARC128C_BLOCK_SIZE 16
#define ARC128C_KEY_SIZE 16

#define ARC128C_SUCCESS 0

/**
 * @brief ARC-128C encryption function
 * Encrypt `message` using the ARC-128C algorithm and store the result in `data`.
 * @param iv Initialization vector (IV) of size `ARC128C_BLOCK_SIZE` bytes.
 * @param key Encryption key of size `ARC128C_KEY_SIZE` bytes.
 * @param message Pointer to the plaintext message to be encrypted.
 * @param data Pointer to the output buffer where the encrypted data will be stored. 
 * Must be pre-allocated, and be at least the size of the `message`.
 * @returns Returns 0 on success, or ARC128C_ERRNO_* on failure.
 */
int arc128_encrypt(uint8_t iv[ARC128C_BLOCK_SIZE], uint8_t key[ARC128C_KEY_SIZE], uint8_t* message, uint8_t* data);

/**
 * @brief ARC-128C decryption function
 * Decrypt `data` using the ARC-128C algorithm and store the result in `message`.
 * @param iv Initialization vector (IV) of size `ARC128C_BLOCK_SIZE` bytes.
 * @param key Decryption key of size `ARC128C_KEY_SIZE` bytes.
 * @param data Pointer to the encrypted data to be decrypted.
 * @param message Pointer to the output buffer where the decrypted plaintext message will be stored.
 * Must be pre-allocated, and be at least the size of the `data`.
 * @returns Returns 0 on success, or ARC128C_ERRNO_* on failure.
 */
int arc128_decrypt(uint8_t iv[ARC128C_BLOCK_SIZE], uint8_t key[ARC128C_KEY_SIZE], uint8_t* message, uint8_t* data);

#endif // ARC128C_H