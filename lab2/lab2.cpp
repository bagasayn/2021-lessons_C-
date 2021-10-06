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

            int partDel = lenght / 3; 
            int partNew = lenght - partDel + 1;

            this->str = new char[partNew];
        
            for(int i = partDel; i < lenght; i++){
                this->str[i - partDel] = str[i];
            }

            this->str[partNew] = '\0';
        }
        else
        {
            cout << "Добавляем + " << endl;

            this->str = new char[lenght + 1];
            for(int i = 1; str[i - 1] != '\0'; i++){
                this->str[0] = '+';
                this->str[i] = str[i-1];
            }
            this->str[lenght + 1 ] = '\0';
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
    MyString str("123456789");
    str.printStr();

    return 0;
}
