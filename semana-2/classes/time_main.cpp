#include <iostream>
#include "time.h"

using namespace std;

int main() {
    Time t1(23, 59, 59);
    t1.print();
    t1.nextSecond();
    t1.print();

    t1.setHour(2);
    t1.setMinute(30);
    t1.setSecond(45);

    cout << t1.getHour() << "h " << t1.getMinute() << "min " << t1.getSecond() << "sec" << endl; 

    return 0;
}