#define CATCH_CONFIG_MAIN

#include "../catch.hpp"
#include "../headers/agencies/NewsAgency.h"
#include "../headers/agencies/Seal.h"
#include "../headers/Map.h"
#include "../headers/agencies/Television.h"
#include "../headers/agencies/Radio.h"
#include <string>


TEST_CASE("sample map") {
    SECTION("put and get") {
        Seal *tel = new Seal();
        tel->setProfile("lal");
        Map<NewsAgency *> map;
        map.put("key", tel);
        REQUIRE(map.get("key") == tel);
    }SECTION("remove and print") {
        Map<int> map;
        map.put("key1", 1);
        map.put("key2", 2);
        map.remove("key2");
        std::string str = map.print();
        REQUIRE(str == "key1 1\n");
    }
}

TEST_CASE("Agencies") {
    SECTION("Application") {
        std::set<Week> set;
        set.insert(Week::MONDAY);
        Seal *seal = new Seal("id",
                   109,
                   "Cheboksary",
                   "profile",
                   AgencyType::SEAL,
                   "first edition",
                   set);
        Television *television = new Television("id",
                              109,
                              "Cheboksary",
                              "profile",
                              AgencyType::TELEVISION, 10);

        std::vector<std::pair<int, int>> vect;
        vect.emplace_back(1, 2);
        vect.emplace_back(3, 4);
        Radio *radio = new Radio("id",
                  109,
                  "Cheboksary",
                  "profile",
                  AgencyType::SEAL,
                  vect);
        App app;
//        app.reg("seal", seal);
        app.reg("radio", radio);
        app.reg("television", television);
        REQUIRE_NOTHROW(app.regionCount(2));
    }
}