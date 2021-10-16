#include "lab4.h"

void Array::printf(){
    
    for (int i = 0; i < n; i++)
    {   
        std::cout<<"\n";
        for (int j = 0; j < m; j++)
        {
            std::cout.width(3);
            std::cout << this->a[i][j]<<" ";
            
        }
        std::cout<<std::endl;
        
    }

    std::cout<<"\n";

    for (int i = 0; i < n; i++)
    {   
        std::cout.width(3);
        std::cout<<b[i]<<" ";
    }
    
    
}

void result(Array& obj){
    obj.b = new int [obj.m];
    int temp=0;
    // столбцы
    for (int j = 0; j < obj.m; j++)
    {   
        if(obj.a[0][j]>0){
            temp = obj.a[0][j];
        } else{
            obj.b[j]=0;
            continue;
        }
        
        //строки
        for (int i = 0; i < obj.n - 1; i++)
        {   
            if(obj.a[i][j] > 0){
                temp = temp * obj.a[i+1][j];
            }
            else{
                obj.b[j] = 0;
                i=0;
                j++;
                temp = obj.a[i][j];
                continue;
            }
        }
        obj.b[j]=temp;
    }
    
}

