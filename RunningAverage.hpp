#pragma once
#include <iostream>

class RunningAverage{
    unsigned int steps;
    int total;

    public:
        RunningAverage();

        void update(double val);
        double getAvg();
        void reset();

        friend std::ostream& operator<<(std::ostream& os, const RunningAverage& avg);
};