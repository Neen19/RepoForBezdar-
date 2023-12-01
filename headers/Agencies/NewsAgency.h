//
// Created by nikita on 18.11.2023.
//

#ifndef LAB3_NEWSAGENCY_H
#define LAB3_NEWSAGENCY_H
#define NO_LICENSE -1


#include "../../Enums/AgencyType.h"
#include <string>

class NewsAgency {

public:
    AgencyType getType();
    std::string getAddr();
    std::string getProfile();
    int getLicense();

protected:
    NewsAgency(AgencyType type);
    std::string id;
    int license;
    std::string addres;
    std::string profile;
    AgencyType type;

};

#endif //LAB3_NEWSAGENCY_H
