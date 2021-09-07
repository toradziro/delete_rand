#include "../deleteRand.h"

int generateRand(int max, int min) {
	// Используем Вихрь Мерсенна для генерации псевдослучайных числе

	uint32_t res;
	std::random_device rd;
	std::mt19937 mersenne(rd());
	static const double fraction = 1.0 / (static_cast<double>(rd.max()) + 1.0);
	res = mersenne();
	return static_cast<int>(res * fraction * (max - min + 1) + min);
}

// Итерируемся через вектор и проверяем наличие элемента в map, если такого
// элемента не находится, то удаляем его из вектора

void deleteFromVec(std::map<int, int> &myMap, std::vector<int> &myVector) {
	for (int32_t i = myVector.size() - 1; i >= 0; i--) {
		if (myMap.count(myVector[i]) == 0) {
			myVector.erase(myVector.begin() + i);
		}
	}
}

// Проходим по всей мапе, проверяем ключ и удаляем элемент, если такого ключа
// нет в векторе

void deleteFromMap(std::map<int, int> &myMap, std::vector<int> &myVector) {
	for (auto i = myMap.begin(); i != myMap.end();) {
		if (std::find(myVector.begin(), myVector.end(), i->first) == myVector.end()) {
			i = myMap.erase(i);
		} else {
			++i;
		}
	}
}

void deleteRandFromVec(std::vector<int> &myVec, int amount) {
	int toDelete = generateRand(0, amount);
	for (int i = 0; i < toDelete; ++i) {
		int currDel = generateRand(0, myVec.size());
		myVec.erase(myVec.begin() + currDel);
	}
}

void deleteRandFromMap(std::map<int, int> &myMap) {
	int toDelete = generateRand(0, myMap.size());
	for (int i = 0; i < toDelete; ++i) {
		int currDel = generateRand(0, myMap.size());
		if (myMap.count(currDel) != 0) {
			myMap.erase(currDel);
		}
	}
}

void fillMap(std::map<int, int> &myMap, int amount) {
	for (int i = 0; i < amount; ++i) {
		++myMap[generateRand(MAX, MIN)];
	}
}

void fillVector(std::vector<int> &myVector, int amount) {
	for (int i = 0; i < amount; ++i) {
		myVector.push_back(generateRand(MAX, MIN));
	}
}