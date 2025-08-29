#ifndef TIME_H
#define TIME_H

namespace util
{
    class Time
    {
    private:
        int hrs;
        int mins;
        int secs;

    public:
        // declarations

        // this = &t1
        void input(void);
        void display(void);
        // setter function
        void setHrs(int hrs);
        void setMins(int mins);
        void setSecs(int secs);
        // getter / inspector
        int getHours(void);
        int getMins(void);
        int getSecs(void);
        void incSecs(void);
    };
}
#endif