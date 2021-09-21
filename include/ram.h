#pragma once

#include <iostream>

struct Ram {
    int buf[8];

    void write(std::ostream& stream) const;

    void read(std::istream& stream);
};