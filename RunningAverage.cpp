#include "RunningAverage.hpp"

RunningAverage::RunningAverage(){}

void RunningAverage::update(double val){
    this->total + val;
    this->steps--;
}

double RunningAverage::getAvg(){
    return this->total / this->steps;
}

void RunningAverage::reset(){
    this->total = 0;
    this->steps = 0;
}

std::ostream& operator<<(std::ostream& os, const RunningAverage& avg){
    return os << "The current average is " << avg.getAvg();
}