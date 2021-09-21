#include <iostream>
#include <string>
#include "include/ram.h"
#include "include/cpu.h"
#include "include/disk.h"
#include "include/gpu.h"
#include "include/kbd.h"

using namespace std;

int main() {
    Ram ram;
    string command;
    while (cin >> command && command != "exit") {
        if (command == "sum")Compute(ram);
        else if (command == "save")Save(ram);
        else if (command == "load")Load(ram);
        else if (command == "input")Input(ram);
        else if (command == "display")Display(ram);
        else cerr << "Unknown command" << endl;
    }
    return 0;
}
