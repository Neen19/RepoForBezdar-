#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include "../headers/Map.h"
#include <string>


TEST_CASE("sample map") {
        SECTION("put and get") {
        Seal *tel = new Seal();
        tel->setProfile("lal");
        Map<NewsAgency *> map;
        map.put("key", tel);
        REQURE(map.get("key") == tel);
    }
    SECTION("remove and print") {
        Map<int> map;
        map.put("key1", 1);
        map.put("key2", 2);
        map.remove("key2")
        std::string str = map.print();
        REQURE(str == "key1 1\n");
        }
}