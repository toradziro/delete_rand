#include "../deleteRand.h"

void writeLog(std::map<int, int> &myMap, std::vector<int> &myVector, int8_t header) {
	std::ofstream log;
	log.open("result/logProg.log", std::ofstream::out | std::ofstream::app);

	if (!log.is_open()) {
		std::cout << "Cannot open log file" << std::endl;
		exit(1);
	}
	if (header == _INIT_CONTAINERS_)
		log << "=====Containers values after initializating by random elements=====" << std::endl;
	if (header == _INIT_DEL_RAND_CONTAINERS_)
		log << "=====Containers values after deleting random amount of values=====" << std::endl;
	if (header == _DELETE_ALONE_ELEMS_)
		log << "=====Containers values after deleting elements that apper in only one of them======" << std::endl;
	log << "Here's vector goes:" << std::endl;
	for (const auto &i : myVector) {
		log << i << " ";
	}
	log << std::endl << std::endl;
	log << "Here's map goes:" << std::endl;
	for (const auto &i : myMap) {
		log << "key: " << i.first << "   value: " << i.second << std::endl;
	}
	log.close();
}