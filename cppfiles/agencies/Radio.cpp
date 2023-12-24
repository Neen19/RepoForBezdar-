#include "../../headers/agencies/Radio.h"

void Radio::chPair(std::pair<int, int> pair, int ind) {
    this->pairs[ind] = pair;
}

std::vector<std::pair<int, int>> Radio::getPairs() {
    return this->pairs;
}

std::ostream &operator<<(std::ostream& ostream, const Radio& radio) {
    ostream << radio.profile;
    return ostream;
}

Radio::Radio(const std::string &id, int license, const std::string &addres, const std::string &profile, AgencyType type,
             const std::vector<std::pair<int, int>> &pairs) : NewsAgency(id, license, addres, profile, type),
                                                              pairs(pairs) {}

void Radio::setPairs(const std::vector<std::pair<int, int>> &pairs) {
    Radio::pairs = pairs;
}
