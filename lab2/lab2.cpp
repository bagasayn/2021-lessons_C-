/**
 * Кабак Сергей
 * 
*/

#include "lab2.h"

using namespace std;

class MyString
{
private:
    /* data */
    char *str;
public:
    MyString()
    {
        str = nullptr;
    };

    MyString(const char *str)
    {
        int lenght = strlen(str);

        if (lenght % 3 == 0)
        {
            cout << lenght << " кратна трем" << endl;

            const char *newStart = str + (lenght / 3);
            const char *end = str + lenght;

            ptrdiff_t dif = end - newStart;
            this->str = new char[dif + 1];

            ptrdiff_t newStartId = newStart - str;
            for(int i = 0; i <= dif; i++){
                this->str[i] = str[i + newStartId];
            }
        }
        else
        {
            cout << "Добавляем + " << endl;

            this->str = new char[lenght + 1];

            this->str[0] = '+';
            for(int i = 1; i <= lenght; i++){
                this->str[i] = str[i - 1];
            }
        }
    };

    void printStr(){
        cout << this->str << endl;
    }

    ~MyString()
    {
        delete[] this->str;
    };
};

int main ()
{
    system("chcp 1251");
    MyString str("123456789123");
    str.printStr();

    return 0;
}
