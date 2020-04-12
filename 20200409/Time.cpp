//
// Created by wilso on 4/11/2020.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h"

using namespace std;

void Time::setTime(int h, int m, int s) {
    if((h >=0 && h < 24) && (m >= 0 && m < 60) && (s >= 0 && s < 60)) {
        hour = h;
        minute = m;
        second = s;
    }
    else {
        throw invalid_argument(
                "hour, minute and/or second was out of range"
                );
    }
}
