//
// Created by nikita on 18.11.2023.
//

#ifndef LAB3_AGENCYTYPE_H
#define LAB3_AGENCYTYPE_H


#include <iostream>

enum class AgencyType {
    SEAL,
    RADIO,
    TELEVISION
};


//std::ostream& operator<<(std::ostream& os, const AgencyType& agencyType) {
//    switch (agencyType) {
//        case AgencyType::SEAL:
//            os << "SEAL";
//            break;
//        case AgencyType::RADIO:
//            os << "RADIO";
//            break;
//        case AgencyType::TELEVISION:
//            os << "TELEVISION";
//            break;
//        default:
//            os.setstate(std::ios_base::failbit); // Обработка ошибки
//    }
//    return os;
//}


#endif //LAB3_AGENCYTYPE_H
