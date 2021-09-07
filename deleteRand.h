#pragma once
#ifndef CPP_DELETE_RAND_H
#define CPP_DELETE_RAND_H

#define _INIT_CONTAINERS_           0
#define _INIT_DEL_RAND_CONTAINERS_  1
#define _DELETE_ALONE_ELEMS_        2


#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>
#include <random>
#include <algorithm>

#define MIN 1
#define MAX 9

void    writeLog(std::map<int, int> &myMap, std::vector<int> &myVector, int8_t header);
int     generateRand(int max, int min);
void    fillMap(std::map<int, int> &myMap, int amount);
void    fillVector(std::vector<int> &myVector, int amount);
void    deleteFromVec(std::map<int, int> &myMap, std::vector<int> &myVector);
void    deleteFromMap(std::map<int, int> &myMap, std::vector<int> &myVector);
void    deleteRandFromVec(std::vector<int> &myVec, int amount);
void    deleteRandFromMap(std::map<int, int> &myMap);
void    writeVecInFile(const std::vector<int> &myVector);
void    writeMapInFile(const std::map<int, int> &myMap);

#endif
