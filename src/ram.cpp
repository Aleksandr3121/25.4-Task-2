#include "../include/ram.h"

void Ram::write(std::ostream& stream) const {
    stream.write((char*) buf, sizeof(buf));
}

void Ram::read(std::istream& stream) {
    stream.read((char*) buf, sizeof(buf));
}