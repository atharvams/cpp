#include<iostream> 
#include "Time.h"

using namespace std; 
using namespace util; 
// definations
void Time :: input(void)
{
    cout << "Enter hrs , mins , secs";
    cin >> this->hrs >> this->mins >> this->secs;
}
void Time ::display(void)
{
    cout << this->hrs << ":" << this->mins << ":" << this->secs << endl;
}
// setter function
void Time ::setHrs(int hrs)
{
    this->hrs = hrs;
}
void Time ::setMins(int mins)
{
    this->mins = mins;
}
void Time ::setSecs(int secs)
{
    this->secs = secs;
}
// getter / inspector
int Time ::getHours(void)
{
    return this->hrs;
}
int Time ::getMins(void)
{
    return this->mins;
}
int Time ::getSecs(void)
{
    return this->secs;
}
void Time ::incSecs(void)
{
    this->secs++;
    if (this->secs == 60)
    {
        this->secs = 0;
        this->mins++;
        if (this->mins == 60)
        {
            this->mins = 0;
            this->hrs++;
            if (this->hrs == 24)
            {
                this->hrs = 0;
            }
        }
    }
}