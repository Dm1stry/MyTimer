#ifndef MYTIMER_HPP
#define MYTIMER_HPP

#include <chrono>

class MyTimer
{
public:
    MyTimer();
    double fromStart();
    double fromLast();
private:
    const std::chrono::time_point<std::chrono::system_clock> start;
    std::chrono::time_point<std::chrono::system_clock> last;
};

#endif // MYTIMER_HPP
