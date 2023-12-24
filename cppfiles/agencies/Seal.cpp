

#include "../../headers/agencies/Seal.h"

std::string Seal::getEdition() { return this->edition; }

void Seal::setEdition(std::string edition) { this->edition = edition; }

std::set<Week> Seal::getDays() { return this->days; }

void Seal::setDays(std::set<Week> days) {
    this->days = days;
}

std::ostream &operator<<(std::ostream& ostream, const Seal& seal) {
    ostream << seal.profile;
    return ostream;
}

