//
// Created by nikita on 03.12.2023.
//

#ifndef LAB3_BYCYCLE_H
#define LAB3_BYCYCLE_H

#include "NewsAgency.h"
#include "../../enums/AgencyType.h"


class Television : public NewsAgency {
public:
    Television() : NewsAgency(AgencyType::TELEVISION) {};

    int getChannel() { return this->channel; };

    void setChannel(int channel) { this->channel = channel; };

    friend std::ostream &operator<<(std::ostream& s, const Television& tel) {
        s << tel.profile;
        return s;
    };


private:
    int channel;
};


#endif //LAB3_BYCYCLE_H