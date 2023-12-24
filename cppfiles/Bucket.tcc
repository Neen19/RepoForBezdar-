//
// Created by nikita on 28.11.2023.
//

#include "../headers/Bucket.h"

template <typename T>
Bucket<T>::Bucket(const std::string& key, T arg) {
    this->key = key;
    this->arg = arg;
    this->busy = true;
}

template <typename T>
int Bucket<T>::operator==(const Bucket<T> &other) {
    return this->key == other.key;
}


template<class T>
T Bucket<T>::getArg() const {
    return arg;
}

template<class T>
void Bucket<T>::setArg(T arg) {
    Bucket::arg = arg;
}

template<class T>
const std::string &Bucket<T>::getKey() const {
    return key;
}

template<class T>
void Bucket<T>::setKey(const std::string &key) {
    this->key = key;
}

template<class T>
bool Bucket<T>::getBusy() const {
    return busy;
}

template<class T>
void Bucket<T>::setBusy(bool busy) {
    this->busy = busy;
}