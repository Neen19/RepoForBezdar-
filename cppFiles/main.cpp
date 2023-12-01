//
// Created by nikita on 28.11.2023.
//
#include "../headers/Map.h"
// #include "Map.cpp"
// #include "Bucket.cpp"


int main() {
    Map<std::string> map;
    map.put("key1", "arg1");
    map.put("key1", "arg1");
    map.put("key2", "arg2");
    map.put("key3", "arg3");
    map.put("key4", "arg4");
    map.put("key5", "arg5");
    std:: cout << map;
}