#include "lab3.h"

/**
 * Ввести 2 массива по 10 элементов, используя различные конструкторы.
 * Один из массивов отсортировать - по убыванию
 * Заменить все нулевые элементы массива на наибольший отрицательный элемент
**/

class Vector{
    private:
        int arrayInt[10];
        char arrayChar[10];
    public:
        Vector(const char a)
        {
            for(int i = 0; i < 10; i++)
            {
            //(end-start+1)+start
            arrayChar[i] = rand()%(122-97+1) + 97;
            }  
        }
        Vector(const int a)
        {
            for(int i = 0; i < 10; i++)
            {
                std::cin >> arrayInt[i];
            }
        }
        ~Vector(){}
        
        void showInt()
        {
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
        void showChar()
        {
            std::cout <<"\n| ";
            
            for(int i = 0; i < 10; i++) 
            {
                std::cout <<"\"" << this->arrayChar[i]<< "\" ";
            }
            
            std::cout <<"|";
        }
        void sortInt()
        {
            
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
        void sortChar(){
            
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
};    




int main ()
{
    Vector arrayInt(1);
    Vector arrayChar('a');
    arrayInt.sortInt();
    arrayInt.showInt();
    arrayChar.sortChar();
    arrayChar.showChar();
    return 0; 
}