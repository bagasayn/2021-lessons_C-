/**
 * Кабак Сергей
 * 
*/

#include "lab3.h"

/**
 * Ввести 2 массива по 10 элементов, используя различные конструкторы.
 * Один из массивов отсортировать - по убыванию
 * Заменить все нулевые элементы массива на наибольший отрицательный элемент
**/

void Vector::showInt(){
    std::cout <<"\n| ";
            
    for(int i = 0; i < 10; i++)
    {
        std::cout <<std::showpos<< this->arrayInt[i]<< " | ";
    }
            
    std::cout <<"\n";
    std::cout << "Min element = "<< this->arrayInt[9]<< std::endl;
    std::cout << "Middle element = " << this->arrayInt[4]<< std::endl;
    std::cout << "Max element = "<< this->arrayInt[0]<< std::endl;
}

void Vector::showChar(){
    std::cout <<"\n| ";
            
    for(int i = 0; i < 10; i++) 
    {
        std::cout <<"\"" << this->arrayChar[i]<< "\" ";
    }
            
    std::cout <<"|";
}

void Vector::sortInt(){
    int key = 0;
    int i = 0;
            
    for(int current = 1; current < 10; current++)
    {
        key = this->arrayInt[current];
        i = current - 1;
        while (i>=0 && this->arrayInt[i]<key)
        {
            this->arrayInt[i + 1] = this->arrayInt[i];
            i = i - 1;
            this->arrayInt[i + 1] = key;
        }    
    }

    if(this->arrayInt[9] < 0)
    {   int j = 0;
        int max = this->arrayInt[9];
        while(j != 10)
        {
            if (this->arrayInt[j] == 0)
            {
                this->arrayInt[j] = max;
            }
                    
            j++;
        }     
    }
}

void Vector::sortChar(){
    int key = 0;
    int i = 0;
    for(int current = 1; current < 10; current++)
    {
        key = (int)this->arrayChar[current];
        i = current - 1;
        while (i>=0 && (int)this->arrayChar[i]<key)
        {
            this->arrayChar[i + 1] = this->arrayChar[i];
            i = i -1;
            this->arrayChar[i + 1] = (char)key;
        }    
    }
}