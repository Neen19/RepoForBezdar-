
// Created by nikita on 03.12.2023.

#include "../headers/App.h"
#include "../headers/agencies/Radio.h"
#include "../headers/agencies/Seal.h"
#include "../headers/agencies/Television.h"
#include <thread>

void App::reg(std::string name, NewsAgency *agency) {
    this->agencies.put(name, agency);
}

void App::nullLicense(std::string id) {
    agencies.get(id)->nullLicense();
}

void App::printTyped(AgencyType type) {
    Seal *seal;
    Television *tel;
    Radio *radio;
    auto it = Map<NewsAgency *>::Iterator(agencies.begin());
    while (it != agencies.end()) {
        if ((*it).getArg()->getType() == type) {
            switch (type) {
                case (AgencyType::SEAL):
                    seal = dynamic_cast<Seal *>((*it).getArg());
                    std::cout << *seal;
                    break;
                case (AgencyType::TELEVISION):
                    tel = dynamic_cast<Television *>((*it).getArg());
                    std::cout << *tel;
                    break;
                case (AgencyType::RADIO):
                    radio = dynamic_cast<Radio *>((*it).getArg());
                    std::cout << *radio;
                    break;
            }
        }
        ++it;
    }
}


void App::regionCount(int threadNum) {
    agencies.regionCount(threadNum);
}


