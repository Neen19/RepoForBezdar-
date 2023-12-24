//
// Created by nikita on 19.11.2023.
//

#ifndef LAB3_WEEK_H
#define LAB3_WEEK_H
#include <string>

enum class Week {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
};

//std::ostream& operator<<(std::ostream& os, const Week& day) {
//    switch (day) {
//        case Week::MONDAY:
//            os << "Monday";
//            break;
//        case Week::TUESDAY:
//            os << "Tuesday";
//            break;
//        case Week::WEDNESDAY:
//            os << "Wednesday";
//            break;
//        case Week::THURSDAY:
//            os << "Thursday";
//            break;
//        case Week::FRIDAY:
//            os << "Friday";
//            break;
//        case Week::SATURDAY:
//            os << "Saturday";
//            break;
//        case Week::SUNDAY:
//            os << "Sunday";
//            break;
//        default:
//            os.setstate(std::ios_base::failbit); // Обработка ошибки
//    }
//    return os;
//}

#endif //LAB3_WEEK_H
