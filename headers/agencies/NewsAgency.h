//
// Created by nikita on 18.11.2023.
//

#ifndef LAB3_NEWSAGENCY_H
#define LAB3_NEWSAGENCY_H
#define NULL_LICENSE -1

#include "../../enums/AgencyType.h"
#include <string>


class NewsAgency {

public:
    NewsAgency() = default;

    AgencyType getType();

    std::string getAddr();

    std::string getProfile();

    int getLicense();

    void setProfile(std::string profile) {
        this->profile = profile;
    }

    void setAddr(std::string addr) { this->addres = addr; }

    void nullLicense();

    virtual ~NewsAgency() = default;


protected:
    NewsAgency(AgencyType type);

    std::string id;
    int license;
    std::string addres;
    std::string profile;
    AgencyType type;
};

#endif //LAB3_NEWSAGENCY_H
