#include <iostream>
#include <stdlib.h>

using namespace std;
/**1) ���������� ��������������� (�����������) ���, ���������� ���������� � ��������: �������, ���, ������ �� 3-� ������. 
* */
struct student{
    char firstName[20];
    char lastName[20];
    int score[3];
};
 /**2) ���������� ������������ ������ ��������, ��������� �� N ��������� (N>=5, �������� � ����������).
 * */
int numStudents(int number) {
    int n;
    do{
        cout << "������� ���������� ��������� n ( n>=5 )" << endl;
        cin >> n;
        system("cls");
        
    } while(n<number);

    return n;
}

 /**3) ��������� ���� ��������� � ������ ��������.
 * */
void setStudents(int n, student *st){

    int size = sizeof(st->score)/sizeof(st->score[0]);

    for(int i = 0; i!=n; i++) {

        cout << "������� firstName "<<"� " << i+1 << endl;
        cin >> st[i].firstName;
        cout << "������� lastName " <<"� " << i+1 << endl;
        cin >> st[i].lastName;
        system("cls");

        for(int j = 0; j < size;j++ ) {

            cout << "������� score " <<"� " << j+1 << endl;
            cin >> st[i].score[j];
        }
        system("cls");
    }
}
/** 4) ������� �������� ������ �������� �� �������, ���������� ������� ��� ���������� ������ ��������� �������.
 * */
int printStudents(int n, student * st) {
    int size = sizeof(st->score)/sizeof(st->score[0]);

    for(int i = 0; i != n; i++) {

        cout <<"Student � " << i+1 << "\r\n" << endl;
        cout << "firstName " << st[i].firstName << "\r\n";
        cout << "lastName " << st[i].lastName << "\r\n";

        for(int j =0; j != size; j++) {

            cout <<"�" << j+1 << " - " << st[i].score[j] << "\t";
        }

        cout << "\r\n\t" << endl;
    }

    return 0;
}
/** 5) ����������� ������� ��� ���������� ������� ��������: 
* */
/* � ������ �������� � �� �����������,
* */
bool isMax(student* st, int start, int end) {
    if(st[start].score[3] < st[end].score[3]){
        return true;

    } else if (st[start].score[3] == st[end].score[3]) {

        if(st[start].score[2] < st[end].score[2]) {
            return true;

        } else if (st[start].score[2] == st[end].score[2]) {

            if (st[start].score[1] < st[end].score[1] || 
                st[start].score[1] == st[end].score[1]) {
                return true;
            } 
        }
    }
    return false;
}

void printSortScoreStudents(int n, student* st) {
    
    int lenght = sizeof(st->score)/sizeof(st->score[0]);
    // ���������� ������ �� ����������� � ����������� �����.
    
    for (int s = 0; s < lenght; s++) {

        for (int startIndex = 0, max = st[s].score[0], maxIndex = 0;
            startIndex < lenght -1; 
            ++startIndex) {

            if (max < st[s].score[s]) {
                maxIndex = s;
            }

            int smallestIndexScore = startIndex;

            for (int currentIndex = startIndex +1; currentIndex < lenght; 
                ++currentIndex) {

                if(st[s].score[currentIndex] < st[s].score[smallestIndexScore]){
                        smallestIndexScore = currentIndex;
                }
            }
                swap(st[s].score[startIndex], st[s].score[smallestIndexScore]);
            }
        }
    
    // for (int id = 0; ){

    // }
    swap(st[0],st[1]);

    printStudents(n,st);        
    
}

int main()
{
    const int number = 1;
    
    system("chcp 1251");

    int n = numStudents(number);

    student * st = new student[n];

    setStudents(n,st);

    printStudents(n,st);

    cout << "�������������� \r\n" << endl;

    printSortScoreStudents(n,st);

    delete st;

    system("pause");

}

