////
// Created by nikita on 19.11.2023.
//

#include "../../headers/Agencies/Seal.h"

std::string Seal::getEdition() { return this->edition; }

void Seal::setEdition(std::string edition) { this->edition = edition; }

std::set<Week> Seal::getDays() { return this->days; }

void Seal::setDays(std::set<Week> days) {
    this->days = days;
}

