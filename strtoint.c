
//  Created by mipsc on 16.06.19.

#include "strtoint.h"

int strtoint(const char* str) {
    // Converting a string to int depending on the position of the digit in the
    // number. Knows the position of the digit by multiplying by many or one
    // 10(s). See strtointTest.c
    int count1 = 1;
    int count2 = 0;
    int digit  = 0;
    int result = 0;
    while (*str) {
        count1 *= 10;  // Accumulating 10s for shifting
        str++;
        count2++;  // Storing how many steps were walken to reset *str later.
    }
    // Resetting *str.
    for (int i = 0; i < count2; i++) {
        str--;
    }
    // Depending on the position of the digit (the very first one has the more
    // 10s)
    while (*str) {
        digit = *str - '0';
        digit *= count1;
        result += digit;
        count1 /= 10;
        str++;
    }
    return result / 10;
}
