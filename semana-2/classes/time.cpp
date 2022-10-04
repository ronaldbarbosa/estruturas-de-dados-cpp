// Nesse arquivo serão implementados todos os métodos da classe Time, definidos em time.h 

#include <iostream>
#include "time.h"

using namespace std;

// :: -> operador de resolução de escopo

// Getters
int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}

//Setters
void Time::setHour(int hour) {
    this->hour = hour;
}

void Time::setMinute(int minute) {
    this->minute = minute;
}

void Time::setSecond(int second) {
    this->second = second;
}

// Outros métodos
void Time::print() const {
    cout << hour << ":" << minute << ":" << second << endl;
}

void Time::nextSecond() {
    second += 1;
    if(second >= 60) {
        second = 0;
        minute++;
    }
    if(minute >= 60) {
        minute = 0;
        hour++;
    }
    if(hour >= 24) {
        hour = 0;
    }
}

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) {}