#ifndef LAB3_SEAL_H
#define LAB3_SEAL_H

#include "NewsAgency.h"
#include "../../enums/Week.h"
#include <set>
#include <vector>


class Seal : public NewsAgency {

public:
    Seal() : NewsAgency(AgencyType::SEAL) {};

    std::string getEdition();

    void setEdition(std::string edition);

    std::set<Week> getDays();

    Seal(const std::string &id, int license, const std::string &addres, const std::string &profile, AgencyType type,
         const std::string &edition, const std::set<Week> &days);

    void setDays(std::set<Week>);

    friend std::ostream &operator<<(std::ostream& s, const Seal& seal);

private:
    std::string edition;
    std::set<Week> days;
};

#endif //LAB3_SEAL_H
