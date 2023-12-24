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