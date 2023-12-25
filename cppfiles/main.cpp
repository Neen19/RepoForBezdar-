//
// Created by nikita on 28.11.2023.
//
#include "../headers/Map.h"
#include "../headers/agencies/NewsAgency.h"
#include "../headers/agencies/Seal.h"
#include "../headers/agencies/Television.h"
#include "../headers/agencies/Radio.h"
#include <thread>
#include <vector>


int main() {
    int num;
    App app;
    std::string id;
    std::string profile;
    std::string address;
    int license;
    std::string name;
    int first, second;
    std::pair<int, int> pair;
    int pairsCount;
    std::vector<std::pair<int, int>> vect;
    Radio *radio;
    Television *television;
    Seal *seal;
    int chanel;
    std::set<Week> set;
    std::string edition;


    while (true) {
        std::cout << "choose section" << std::endl
                  << "0: register new app" << std::endl
                  << "1: print information about typed agencies" << std::endl
                  << "2: null agency license" << std::endl
                  << "3: get the number of agencies in each region" << std::endl;
        std::cin >> num;
        std::cout << std::endl;
        switch (num) {
            case 0:
                int typeCase;
                std::cout << "choose agency type" << std::endl
                          << "0: radio" << std::endl
                          << "1: television" << std::endl
                          << "2: seal" << std::endl;
                std::cin >> typeCase;
                std::cout << std::endl;
                switch (typeCase) {
                    case 0:
                        std::cout << "enter license: ";
                        std::cin >> license;
                        std::cout << "enter name: ";
                        std::cin >> name;
                        std::cout << "enter address: ";
                        std::cin >> address;
                        std::cout << "enter profile: ";
                        std::cin >> profile;
                        std::cout << "enter pairs count: ";
                        std::cin >> pairsCount;
                        std::cout << "now enter pairs" << std::endl;
                        for (int i = 0; i < pairsCount; i++) {
                            std::cout << "next pair: ";
                            std::cin >> first;
                            std::cin >> second;
                            vect.emplace_back(first, second);
                        }
                        radio = new Radio(name, license, address, profile, AgencyType::RADIO, vect);
                        std::cout << std::endl;
                        app.reg(name, radio);
                        std::cout << "registered successfully";
                        std::cout << std::endl;
                        break;
                    case 1:
                        std::cout << "enter license: ";
                        std::cin >> license;
                        std::cout << "enter name: ";
                        std::cin >> name;
                        std::cout << "enter address: ";
                        std::cin >> address;
                        std::cout << "enter profile: ";
                        std::cin >> profile;
                        std::cout << "enter chanel: ";
                        std::cin >> chanel;
                        television = new Television(name, license, address, profile, AgencyType::TELEVISION, chanel);
                        std::cout << std::endl;
                        app.reg(name, television);
                        std::cout << "registered successfully";
                        std::cout << std::endl;
                        break;
                    case 2:
                        std::cout << "enter license: ";
                        std::cin >> license;
                        std::cout << "enter name: ";
                        std::cin >> name;
                        std::cout << "enter address: ";
                        std::cin >> address;
                        std::cout << "enter profile: ";
                        std::cin >> profile;
                        std::cout << "enter edition: ";
                        std::cin >> edition;
                        seal = new Seal(name, license, address, profile, AgencyType::SEAL, edition, set);
                        app.reg(name, seal);
                        break;
                }
                break;
            case 1:
                std::cout << "select type" << std::endl
                          << "0: Radio" << std::endl
                          << "1: Television" << std::endl
                          << "2: Seal" << std::endl;
                std::cin >> typeCase;
                std::cout << std::endl;
                if (typeCase == 0) app.printTyped(AgencyType::RADIO);
                if (typeCase == 1) app.printTyped(AgencyType::TELEVISION);
                if (typeCase == 2) app.printTyped(AgencyType::SEAL);
                break;
            case 2:
                std::cout << "enter agency name: ";
                std::cin >> name;
                app.nullLicense(name);
                break;
            case 3:
                app.regionCount(2);
                break;
        }
    }
    return 0;
}
