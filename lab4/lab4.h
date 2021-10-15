#ifndef LAB4_H
#define LAB4_H

#include <iostream>
#include <stdlib.h>

class Array
{
private:
    int **a;
    int i,j,n,m;
public:
    Array(){
        std::cout<< "Enter size n = "<<std::endl;
        std::cin>>n;
        std::cout<< "Enter size m =" <<std::endl;
        std::cin>>m;
        a = new int *[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = new int [m];
        }
        
        };
    ~Array(){
        for (int i = 0; i < n; i++)
        {
            delete[] a[i];
        }
        
        delete[] a;
    };
    void printf(
        const int& a, 
        const int& n, 
        const int& m
        );
    void result();
};

#endif
