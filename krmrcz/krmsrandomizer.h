#pragma once
#include <iostream>
#include <list>
#include <ctime>
#include <random>
#include <string>
#include <array>
#include <string>

using namespace std;




// random name and adress generator
void gen_random(char* s, const int len, bool isnum) {
    // addresses contain numbers, names not
    if (isnum) {
        char alphanum[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";

        for (int i = 0; i < len; ++i) {
            s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
        }
    }
    else {
        char onlyalph[] =
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < len; ++i) {
            s[i] = onlyalph[rand() % (sizeof(onlyalph) - 1)];
        }
    }
    s[len] = 0;
}

// random number generator for gbp and id
template<class T>
T randnum(T min, T max) {
    uniform_real_distribution<double> distribution(min + 0, max + 0);
    random_device rd;
    default_random_engine generator(rd());
    auto num = (T)distribution(generator);
    return num;
}

