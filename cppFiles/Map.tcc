#include "../headers/Map.h"
#include <iostream>

template<typename T>
Map<T>::Map() {
    this->buckets = new Bucket<T>[INITIAL_SIZE];
    this->capacity = INITIAL_SIZE;
    this->size = 0;
    for (int i = 0; i < capacity; i++) {
        buckets[i].setBusy(false);
    }
}

template<typename T>
void Map<T>::put(std::string key, T arg) {
    if (this->capacity == this->size) throw std::runtime_error("table is full");
    int ind = hash(key) % capacity;
    while (this->buckets[ind].getBusy() != false) {
        if (this->buckets[ind].getKey() == key) {
            this->buckets[ind].setArg(arg);
            return;
        }
        ind++;
        ind = ind % capacity;
    }
    this->buckets[ind] = Bucket<T>(key, arg);
    size++;
}

template<typename T>
T Map<T>::get(std::string key) {
    if (this->size == 0) throw std::runtime_error("map is empty");
    int ind = hash(key) % capacity;
    if (this->buckets[ind].getBusy() == false) throw std::runtime_error("loh");
    return this->buckets[ind].getArg();
}

template<typename T>
int Map<T>::hash(std::string key) {
    int res = 0;
    for (char k : key) res += k;
    return res;
}

template<typename T>
std::string Map<T>::print() {
    std::string ans;
    for (int i = 0; i < capacity; i++) {
        if (buckets[i].getBusy()) {
            ans += buckets[i].getKey() + " " + std::to_string(buckets[i].getArg()) + "\n";
                    //std::cout << buckets[i].getKey() << " " << buckets[i].getArg() << std::endl;
        }
    }
    return ans;
}

template<typename T>
void Map<T>::remove(std::string key) {
    int ind = hash(key) % capacity;
    this->buckets[ind].setBusy(false);
}



