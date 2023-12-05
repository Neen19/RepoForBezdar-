#ifndef LAB3_MAP_H
#define LAB3_MAP_H

#include <iostream>
#include <string>
#include <vector>
#include "Bucket.h"

#define INITIAL_SIZE 10


template<typename T>
class Map {
public:
    Map();

    void put(std::string key, T arg);

    T get(std::string key);

    void remove(std::string key);

    std::string print();

private:
    int capacity;
    int size;
    Bucket<T> *buckets;
    int hash(std::string key);
};


#include "../cppFiles/Map.tcc"

#endif //LAB3_MAP_H
