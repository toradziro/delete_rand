#include "deleteRand.h"

int main() {
	int amount;
	std::map<int, int> myMap;
	std::vector<int> myVector;

	std::cout << "Write size of containers you want to be filled: ";
	std::cin >> amount;
	if (amount <= 0) {
		std::cout << "Value can't be less than 1, please try again." << std::endl;
		return (1);
	}
	fillMap(myMap, amount);
	fillVector(myVector, amount);
	
	writeLog(myMap, myVector, _INIT_CONTAINERS_);
	
	deleteRandFromVec(myVector, amount);
	deleteRandFromMap(myMap);

	writeLog(myMap, myVector, _INIT_DEL_RAND_CONTAINERS_);

	deleteFromMap(myMap, myVector);
	deleteFromVec(myMap, myVector);
	
	writeLog(myMap, myVector, _DELETE_ALONE_ELEMS_);

	writeMapInFile(myMap);
	writeVecInFile(myVector);
	std::cout << "Final results written to ./result/map and ./result/vector files,"
				"program logs you can find in resule ./result/logProg.log" << std::endl;
	return 0;
}