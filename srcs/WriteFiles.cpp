#include "../deleteRand.h"

void writeVecInFile(const std::vector<int> &myVector) {
    std::ofstream file;
    file.open("result/vector", std::ofstream::out | std::ofstream::trunc);
    if (!file.is_open()) {
        std::cerr << "Error: Cannot open file to write a vector" << std::endl;
        exit(1);
    }
    for (const auto &i : myVector) {
        file << i << std::endl;
    }
    file.close();
}

void writeMapInFile(const std::map<int, int> &myMap) {
    std::ofstream file;
    file.open("result/map", std::ofstream::out | std::ofstream::trunc);
    if (!file.is_open()) {
        std::cerr << "Error: Cannot open file to write a map" << std::endl;
        exit(1);
    }
    for (const auto &i : myMap) {
        file << i.first << std::endl;
    }
    file.close();
}