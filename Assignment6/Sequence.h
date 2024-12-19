#include <vector>
#include <iostream>
#ifndef Seq_H
#define Seq_h
template <typename T>
class Sequence {
private:
    int d;
    std::vector<double> vec;
    T typeOfSequence;
public:
    Sequence(T &typeOfSequence, int &num, std::vector<double>& vec);

    bool foo();
};

template <>
class Sequence<double> {
private:
    double typeOfSequence;
    int d;
    std::vector<double> vec;
public:

Sequence(double typeOfSequence, int d, std::vector<double> vec)
    : typeOfSequence(typeOfSequence), d(d), vec(vec) {}
    bool foo() {
        return true;
    }
};

template <>
class Sequence<int> {
private:
    int typeOfSequence;
    int d;
    std::vector<double> vec;
public:
    Sequence(int typeOfSequence, int d, std::vector<double> vec)
        : typeOfSequence(typeOfSequence), d(d), vec(vec) {}

    bool foo() {
        return true;
    }
};

#endif
