#include "lab4.h"

void Array::printf(const int& a,const int& n, const int& m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << a[i][j];
        }
        std::cout <<std::endl;
        
    }
    
}

void Array::result(){

}

