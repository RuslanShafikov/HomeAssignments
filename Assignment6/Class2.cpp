#include "Class2.h"

bool Class2::bar(const int &d, std::vector<double>& vec) {
    if (!vec.empty()) {
        vec[0] = d;
        return true;
    }
    return false;
}
int Class2::c_2_1() { return 2; }
double Class2::c_2_2() { return 2.0; }
void Class2::c_2_3() {}
