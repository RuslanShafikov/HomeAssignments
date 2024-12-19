#include "Sequence.h"


template <typename T>
Sequence<T>::Sequence(T &typeOfSequence, int &d, std::vector<double>& vec)
    : typeOfSequence(typeOfSequence), d(d), vec(vec) {}

template <typename T>
bool Sequence<T>::foo() {
    if (typeOfSequence) {
        return true;
    }
    else {
        return false;
    }
}
