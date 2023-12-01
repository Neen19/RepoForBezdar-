#ifndef LAB3_RADIO_H
#define LAB3_RADIO_H


#include "NewsAgency.h"
#include <utility>
#include <vector>

class Radio : public NewsAgency {
public:
    Radio() : NewsAgency(AgencyType::RADIO) {};

    void chPair(std::pair<int, int> pair, int ind);

    std::vector<std::pair<int, int>> getPairs();


private:
    std::vector<std::pair<int, int>> pairs;
};


#endif //LAB3_RADIO_H
