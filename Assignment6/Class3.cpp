#include "Class3.h"

bool Class3::bar(int &d, std::vector<double> & vec){
    if (d == -1*static_cast<int>(vec.size())) {
        return true;
    }
    for (int i = 0; i < static_cast<int>(vec.size()); ++i) {
        vec[i] += d;
    }
    return false;
}
int Class3::c_3_1() { return 3; }
double Class3::c_3_2() { return 3.0; }
void Class3::c_3_3() {}
