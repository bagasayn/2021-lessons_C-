#ifndef LAB3_H
#define LAB3_H

#include <iostream>
#include <stdlib.h>

class Vector{
    private:
        int arrayInt[10];
        char arrayChar[10];
    public:
        Vector(const char a);
        Vector(const int a);
        ~Vector();
        void showInt();
        void showChar();
        void sortInt();
        void sortChar();
};

#endif