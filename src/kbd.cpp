#include "../include/kbd.h"

void Input(Ram& ram){
    for(int i=0; i<8; ++i)std::cin>>ram.buf[i];
}