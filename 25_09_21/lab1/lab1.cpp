#include <iostream>


using std::cout;
using std::cin;
using std::endl;

/**
 *  1) Определить комбинированный (структурный) тип, содержащий информацию о студенте: фамилия, имя, массив из 3-х оценок. 
**/
struct student
{
    char lastName[20];
    char firstName[20];
    int score[3];
};


int main()
{   
    /**
    *  2) Определить динамический массив структур, состоящий из N элементов (N>=5, вводится с клавиатуры).
    **/
    int n;
    do{
        
        cout << "Enter n (n >= 5)" << endl;
        cin >> n ;
        if(n<5){
            cout << "Please, enter n >=5 " << endl;
            system("cls");
        }
    }while (n<5);
    system("cls");
    cout << "Student = " << n << endl;
    student *st = new student[n];

    /**
     * 3) Выполнить ввод элементов в массив структур.
     **/
    int size = sizeof(st->score) / sizeof(st->score[0]);
    for(int i = 0 ; i != n; i++){
        cout << "Enter firstName: " << "No: " << i+1 << endl;  
        cin >> st[i].firstName;
        cout << "Enter lastName: " << "No: " << i+1 << endl;
        cin >> st[i].lastName;
        system("cls");
        for(int j = 0; j != size; j++){
            cout << "Enter score: " << "No: "<< j+1 << endl;
            cin >> st[i].score[j];
        }
        system("cls"); 
    }
    system("pause");
}
