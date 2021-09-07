#include "deleteRand.h"

bool checkIfValid(const std::vector<int> &mapFileArr, const std::vector<int> vecFileArr) {
    for (int i = 0; i < mapFileArr.size(); ++i) {
        if (std::find(vecFileArr.begin(), vecFileArr.end(), mapFileArr[i]) == vecFileArr.end()) {
            return false;
        }
    }
    for (int i = 0; i < vecFileArr.size(); ++i) {
        if (std::find(mapFileArr.begin(), mapFileArr.end(), vecFileArr[i]) == mapFileArr.end()) {
            return false;
        }
    }
    return true;
}

int main() {
    std::fstream mapFile;
    std::fstream vectorFile;
    std::vector<int> mapFileArr;
    std::vector<int> vecFileArr;

    mapFile.open("result/map");
    vectorFile.open("result/vector");
    if (!mapFile.is_open() || !vectorFile.is_open()){
        std::cerr << "Error: one of files can't be open" << std::endl;
        exit (1);
    }
    std::string line;
    while (getline(mapFile, line)) {
        mapFileArr.push_back(std::stoi(line));
    }
    while (getline(vectorFile, line)) {
        vecFileArr.push_back(std::stoi(line));
    }
    mapFile.close();
    vectorFile.close();
    if (!checkIfValid(mapFileArr, vecFileArr)) {
        std::cout << "Not valid values, please, check ur files" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}