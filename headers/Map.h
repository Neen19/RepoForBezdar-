#ifndef LAB3_MAP_H
#define LAB3_MAP_H

#include <iostream>
#include <string>
#include <vector>
#include <mutex>
#include "Bucket.h"
#include "agencies/NewsAgency.h"

#define INITIAL_SIZE 10


template<typename T>
class Map {
public:
    Map();

    void increment(Map<NewsAgency *>* map, int firstInd, int lastInd);

    void put(std::string key, T arg);

    T get(std::string key);

    void remove(std::string key);

    std::string print();

    class Iterator {
    private:
        Bucket<T> *current;
        int index;
        const Map<T> *map;
        int lastInd;
    public:
        Iterator(const Map<T> *map, int index = 0, int lastInd = 0) : map(map), index(index), lastInd(lastInd) {
            current = map->buckets + index;
            while (index < map->capacity && !current->getBusy()) {
                ++index;
                ++current;
            }
        }

        Iterator &operator++() {
            do {
                ++index;
                ++current;
            } while (index < lastInd && !current->getBusy());
            return *this;
        }

        bool operator!=(const Iterator &other) const {
            return index != other.index;
        }

        Bucket<T> &operator*() const {
            return *current;
        }
    };

    Iterator begin(int ind = 0) const {
        if (ind == 0) return Iterator(this, 0);
        return Iterator(this, ind);
    }

    Iterator end(int ind = 0) const {
        if (ind == 0 || ind >= capacity) return Iterator(this, capacity);
        return Iterator(this, ind);
    }

    int getCapacity() { return capacity; }
    Bucket<T> *getBuckets() { return buckets; }

    Map(const Map<T>& other) : capacity(other.capacity), size(other.size) {
        buckets = new Bucket<T>[capacity];
        for (int i = 0; i < capacity; ++i) {
            buckets[i] = other.buckets[i];
        }
    }


    Map<int> regionCount(int threadCount);


private:
    int capacity;
    int size;
    Bucket<T> *buckets;
    mutable std::mutex mutex;
    int hash(std::string key);
};


#include "../cppfiles/Map.tcc"

#endif //LAB3_MAP_H
