#include "../../headers/agencies/NewsAgency.h"

AgencyType NewsAgency::getType() {
    return this->type;
}

const std::string &NewsAgency::getId() const {
    return id;
}

void NewsAgency::setId(const std::string &id) {
    NewsAgency::id = id;
}

void NewsAgency::setLicense(int license) {
    NewsAgency::license = license;
}

void NewsAgency::setAddres(const std::string &addres) {
    NewsAgency::addres = addres;
}

void NewsAgency::setType(AgencyType type) {
    NewsAgency::type = type;
}

const std::string &NewsAgency::getAddres() const {
    return addres;
}

std::string NewsAgency::getAddr() {
    return this->addres;
}

int NewsAgency::getLicense() {
    return this->license;
}

void NewsAgency::nullLicense() {
    this->license = NULL_LICENSE;
}

std::string NewsAgency::getProfile() {
    return this->profile;
}

NewsAgency::NewsAgency(AgencyType type) {
    this->type = type;
}

NewsAgency::NewsAgency(const std::string &id, int license, const std::string &addres, const std::string &profile,
                       AgencyType type) : id(id), license(license), addres(addres), profile(profile), type(type) {}
