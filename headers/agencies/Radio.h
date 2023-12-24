#ifndef LAB3_RADIO_H
#define LAB3_RADIO_H


#include "NewsAgency.h"
#include <utility>
#include <vector>

class Radio : public NewsAgency {
public:

    Radio(const std::string &id, int license, const std::string &addres, const std::string &profile, AgencyType type,
          const std::vector<std::pair<int, int>> &pairs);

    Radio() : NewsAgency(AgencyType::RADIO) {};

    void chPair(std::pair<int, int> pair, int ind);

    std::vector<std::pair<int, int>> getPairs();

    friend std::ostream &operator<<(std::ostream& s, const Radio& seal);

    void setPairs(const std::vector<std::pair<int, int>> &pairs);

private:
    std::vector<std::pair<int, int>> pairs;
};


#endif //LAB3_RADIO_H
