//
// Created by nikita on 03.12.2023.
//

#ifndef LAB3_BYCYCLE_H
#define LAB3_BYCYCLE_H

#include "NewsAgency.h"
#include "../../enums/AgencyType.h"




class Television : public NewsAgency {
public:
    Television() : NewsAgency(AgencyType::TELEVISION) {}

    Television(const std::string &id, int license, const std::string &addres, const std::string &profile,
                           AgencyType type, int channel) : NewsAgency(id, license, addres, profile, type),
                                                           channel(channel) {}

    int getChannel() { return this->channel; };

    void setChannel(int channel) { this->channel = channel; };

    friend std::ostream &operator<<(std::ostream& ostream, const Television& tel) {
        ostream << "name: " << tel.id << std::endl;;
        ostream << "profile: " << tel.profile << std::endl
                << "license: " << tel.license << std::endl
                << "address: " << tel.addres << std::endl
                << "chanel: " << tel.channel << std::endl;
        ostream << std::endl;
        return ostream;
    };


private:
    int channel;
};


#endif //LAB3_BYCYCLE_H
