//
// Created by nikita on 28.11.2023.
//
#include "../headers/Map.h"
// #include "Map.cpp"
// #include "Bucket.cpp"

#include "../headers/Agencies/Seal.h"
#include <iostream>


int main() {

//    Seal *tel = new Seal();
//    tel->setProfile("lal");
//    Map<NewsAgency*> map;
//    map.put("key", tel);
//    Seal *elem = dynamic_cast<Seal*>(map.get("key"));
    Map<int> map;
    map.put("key1", 1);
    map.put("key2", 2);
    std::string str = map.print();
    std::cout << str;
}