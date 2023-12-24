#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

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

TEST_CASE("Application") {
    SECTION("regionCount") {
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
        app.reg("seal", seal);
        app.reg("radio", radio);
        app.reg("television", television);
        REQUIRE_NOTHROW(app.regionCount(2));
    }

    SECTION("typedPrint") {
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
        app.reg("seal", seal);
        app.reg("radio", radio);
        app.reg("television", television);
        REQUIRE_NOTHROW(app.printTyped(AgencyType::RADIO));
    }

    SECTION("null license") {
        std::set<Week> set;
        set.insert(Week::MONDAY);
        Seal *seal = new Seal("id",
                              109,
                              "Cheboksary",
                              "profile",
                              AgencyType::SEAL,
                              "first edition",
                              set);
        Television *television = new Television("id2",
                                                109,
                                                "Cheboksary",
                                                "profile",
                                                AgencyType::TELEVISION, 10);

        std::vector<std::pair<int, int>> vect;
        vect.emplace_back(1, 2);
        vect.emplace_back(3, 4);
        Radio *radio = new Radio("id1",
                                 109,
                                 "Cheboksary",
                                 "profile",
                                 AgencyType::SEAL,
                                 vect);
        App app;
        app.reg("seal", seal);
        app.reg("radio", radio);
        app.reg("television", television);
        REQUIRE_NOTHROW(app.nullLicense("seal"));
    }
}

TEST_CASE("Agencies") {
    SECTION("getters and setters") {
        std::set<Week> set;
        set.insert(Week::MONDAY);
        Seal *seal = new Seal();
        seal->setId("id1");
        seal->setLicense(109);
        seal->setAddr("Cheboksary");
        seal->setProfile("profile");
        seal->setType(AgencyType::SEAL);

        Television *television = new Television();
        television->setId("id1");
        television->setLicense(109);
        television->setAddr("Cheboksary");
        television->setProfile("profile");
        television->setType(AgencyType::TELEVISION);

        std::vector<std::pair<int, int>> vect;
        vect.emplace_back(1, 2);
        vect.emplace_back(3, 4);
        Radio *radio = new Radio();
        radio->setId("id1");
        radio->setLicense(109);
        radio->setAddr("Cheboksary");
        radio->setProfile("profile");
        radio->setType(AgencyType::SEAL);

        std::string id = radio->getId();
        int license = radio->getLicense();
        std::string addres = radio->getAddr();
        std::string profile = radio->getProfile();
        AgencyType type = radio->getType();

        id = seal->getId();
        license = seal->getLicense();
        addres = seal->getAddr();
        profile = seal->getProfile();
        type = seal->getType();


        id = television->getId();
        license = television->getLicense();
        addres = television->getAddr();
        profile = television->getProfile();
        type = television->getType();

    }
}
