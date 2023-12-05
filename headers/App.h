//
// Created by nikita on 19.11.2023.
//

#ifndef LAB3_APP_H
#define LAB3_APP_H

#include "Map.h"
#include "Agencies/NewsAgency.h"

class App {
public:
    void reg(std::string name, NewsAgency &agency);

private:
    Map<NewsAgency> agencies;
};

#endif //LAB3_APP_H
