#ifndef LAB3_H
#define LAB3_H

#include <iostream>
#include <stdlib.h>

class Vector{
    private:
        int arrayInt[10];
        char arrayChar[10];
    public:
        Vector(const char a) : arrayChar(){
            for(int i = 0; i < 10; i++)
            {
                //(end-start+1)+start
                this->arrayChar[i] = rand()%(122-97+1) + 97;
            }
        };
        Vector(const int a) : arrayInt(){
            for(int i = 0; i < 10; i++)
            {
                std::cin >> this->arrayInt[i];
            }
        };
        ~Vector(){};
        void showInt();
        void showChar();
        void sortInt();
        void sortChar();
};

#endif