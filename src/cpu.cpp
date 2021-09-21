#include "../include/cpu.h"
#include <iostream>

void Compute(const Ram& ram) {
    long long result = 0;
    for (size_t i = 0; i < 8; ++i) {
        result += ram.buf[i];
    }
    std::cout << result << std::endl;
}