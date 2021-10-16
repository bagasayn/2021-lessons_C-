#ifndef LAB4_H
#define LAB4_H

#include <iostream>
#include <stdlib.h>

class Array
{
private:
    int **a,*b;
    int i,j,n,m;
public:
    Array(){
        std::cout<< "Enter size n = "<<std::endl;
        std::cin>>n;
        std::cout<< "Enter size m =" <<std::endl;
        std::cin>>m;
        a = new int *[n];
        std::cout<<"Enter element:" <<std::endl; 
        for (int i = 0; i < n; i++)
        {
            a[i] = new int [m];
            for (int j = 0; j < m; j++)
            {
                std::cin>>a[i][j];
            }
            
        }
        
        };
    ~Array(){
        for (int i = 0; i < n; i++)
        {
            delete[] a[i];
        }
        
        delete[] a;
    };
    void printf();
    friend void result(Array& obj);
};

#endif
