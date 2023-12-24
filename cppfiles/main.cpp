//
// Created by nikita on 28.11.2023.
//
#include "../headers/Map.h"
#include "../headers/agencies/NewsAgency.h"
#include "../headers/agencies/Seal.h"
#include "../headers/agencies/Television.h"
#include "../headers/agencies/Radio.h"
#include <thread>
#include <vector>


int main() {
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
    vect.emplace_back(1, 2);
    Radio *radio = new Radio("id",
                             109,
                             "Moscow",
                             "profile",
                             AgencyType::SEAL,
                             vect);
    App app;
        app.reg("seal", seal);
    app.reg("radio", radio);
    app.reg("television", television);
    app.regionCount(2);
}
