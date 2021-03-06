#include <stdint.h>


typedef uint8_t         u8;
typedef uint16_t        u16;
typedef uint32_t        u32;
typedef uint64_t        u64;
typedef int8_t          i8;
typedef int16_t         i16;
typedef int32_t         i32;
typedef int64_t         i64;

struct uint128_t {
    u8 given_bits[16];
};

struct uint256_t {
    u64 given_bits[4];
};

struct int128_t {
    i8 given_bits[16];
};

struct int256_t {
    i64 given_bits[4];
};


