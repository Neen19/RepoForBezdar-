//
// Created by nikita on 19.11.2023.
//

#ifndef LAB3_APP_H
#define LAB3_APP_H

#include "Map.h"
#include "agencies/NewsAgency.h"

class App {
public:
    void reg(std::string name, NewsAgency *agency);
    void nullLicense(std::string id);
    template <typename T>
    void change(int field, T arg) {
        std::cout << arg;
    }

    void printTyped(AgencyType type);

    friend std::ostream& operator<<(std::ostream &ostream, App& app) {
        return ostream << app.name;
    }

    void regionCount(int threadCount);


private:
    Map<NewsAgency *> agencies;
    Map<int> regionCountMap;
    std::string name = "app";
};

#endif //LAB3_APP_H
