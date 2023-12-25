#include "../../headers/agencies/Radio.h"

void Radio::chPair(std::pair<int, int> pair, int ind) {
    this->pairs[ind] = pair;
}

std::vector<std::pair<int, int>> Radio::getPairs() {
    return this->pairs;
}

std::ostream &operator<<(std::ostream& ostream, const Radio& radio) {
    ostream << "name: " << radio.id << std::endl;;
    ostream << "profile: " << radio.profile << std::endl
    << "license: " << radio.license << std::endl
    << "address: " << radio.addres << std::endl
    << "pairs: ";
    for (auto it : radio.pairs) {
        ostream << it.first << " " << it.second << std::endl;
    }
    ostream << std::endl;
    return ostream;
}

Radio::Radio(const std::string &id, int license, const std::string &addres, const std::string &profile, AgencyType type,
             const std::vector<std::pair<int, int>> &pairs) : NewsAgency(id, license, addres, profile, type),
                                                              pairs(pairs) {}

void Radio::setPairs(const std::vector<std::pair<int, int>> &pairs) {
    Radio::pairs = pairs;
}
