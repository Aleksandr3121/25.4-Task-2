#include "../include/gpu.h"

void Display(const Ram& ram) {
    for (int i = 0; i < 8; ++i)std::cout << ram.buf[i] << ' ';
    std::cout << std::endl;
}