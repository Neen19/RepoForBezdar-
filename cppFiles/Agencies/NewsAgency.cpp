#include "../../headers/Agencies/NewsAgency.h"

AgencyType NewsAgency::getType() {
    return this->type;
}

std::string NewsAgency::getAddr() {
    return this->addres;
}

int NewsAgency::getLicense() {
    return this->license;
}

std::string NewsAgency::getProfile() {
    return this->profile;
}

NewsAgency::NewsAgency(AgencyType type) {
    this->type = type;
}