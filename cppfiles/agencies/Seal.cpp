

#include "../../headers/agencies/Seal.h"

std::string Seal::getEdition() { return this->edition; }

void Seal::setEdition(std::string edition) { this->edition = edition; }

std::set<Week> Seal::getDays() { return this->days; }

void Seal::setDays(std::set<Week> days) {
    this->days = days;
}

std::ostream &operator<<(std::ostream& ostream, const Seal& seal) {
    ostream << "name: " << seal.id << std::endl;;
    ostream << "profile: " << seal.profile << std::endl
            << "license: " << seal.license << std::endl
            << "address: " << seal.addres << std::endl
            << "edition: " << seal.edition << std::endl;
//    for (auto it : seal.days) {
//        ostream << it;
//    }

    ostream << std::endl;
    return ostream;
}

Seal::Seal(const std::string &id, int license, const std::string &addres, const std::string &profile, AgencyType type,
           const std::string &edition, const std::set<Week> &days) : NewsAgency(id, license, addres, profile, type),
                                                                     edition(edition), days(days) {}

