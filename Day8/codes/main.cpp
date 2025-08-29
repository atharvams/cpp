#include <iostream>
#include "Time.h"
using namespace util; 

int main()
{

    Time t3;
    t3.setHrs(22);
    t3.setMins(59);
    t3.setSecs(59);
    t3.incSecs();
    t3.display();

    return 0;
}
