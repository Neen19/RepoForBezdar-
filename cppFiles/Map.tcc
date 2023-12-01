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
        if (this->buckets[ind].getKey() != key) {
            this->buckets[ind].setArg(arg);
        }
        ind++;
        ind = ind % capacity;
    }
    this->buckets[ind] = Bucket<T>(key, arg);
}

template<typename T>
T Map<T>::get(std::string key) {
    if (this->csize == 0) throw std::runtime_error("map is empty");
    int ind = hash(key);
    if (this->bcts[ind] == nullptr) return nullptr;
    return this->bcts[ind];
}

template<typename T>
int Map<T>::hash(std::string key) {
    int res = 0;
    for (char k : key) res += k;
    return res;
}

template<typename T>
void Map<T>::print() {

}

template<typename T>
void Map<T>::remove(std::string key) {
    Bucket<T> bucket = get(key);
    bucket.setBusy(false);
}

template<typename T>
std::ostream operator<<(std::ostream &out, Map<T> obj) {
    for (int i = 0; i < obj.capacity; i++) {
        if (obj.buckets[i].getBusy()) {
            std::cout << obj.buckets[i].getKey();
            std::cout << obj.buckets[i].getArg();
        }
    }
    return std::ostream(nullptr);
}

//template<typename T>
//std::istream operator<<(std::istream &out, Map<T> obj) {
//
//    return std::istream(nullptr);
//}


