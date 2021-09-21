#include "../include/disk.h"
#include <fstream>
#include <stdexcept>

void Save(const Ram& ram) {
    std::ofstream file("date.txt");
    if (!file.is_open())throw std::runtime_error("");
    ram.write(file);
    file.close();
}

void Load(Ram& ram) {
    std::ifstream file("date.txt");
    if (!file.is_open())throw std::runtime_error("");
    ram.read(file);
    file.close();
}