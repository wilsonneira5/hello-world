//
// Created by wilso on 4/11/2020.
//
#include <string>
#ifndef INC_20200409_TIME_H
#define INC_20200409_TIME_H

class Time {
public:
    void setTime(int, int, int);
    std::string toUniversalString() const;
    std::string toStandardString() const;
private:
    unsigned int hour{0};
    unsigned int minute{0};
    unsigned int second{0};
};
#endif //INC_20200409_TIME_H


