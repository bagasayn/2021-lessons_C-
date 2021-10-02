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
void isMax(student* st, int currentId, int nextId) {

    if (st[currentId].score[2] < st[nextId].score[2]) {
        swap(st[nextId],st[currentId]);

    } 
    else if(st[currentId].score[2] == st[nextId].score[2]) {

        if (st[currentId].score[1] < st[nextId].score[1]) {
            swap(st[nextId],st[currentId]);

        } 
        else if (st[currentId].score[1] == st[nextId].score[1]) {

            if (st[currentId].score[0] < st[nextId].score[0]) {
                swap(st[nextId],st[currentId]);
            }
        }
    }    
}

void printSortScoreStudents(int n, student* st) {
    
    int lenght = sizeof(st->score)/sizeof(st->score[0]);
    // ���������� ������ �� ����������� � ����������� �����.
    
    for (int id = 0; id < n; id++) {
        int tempScore, item;

        for (int current = 1; current < lenght; current++) {
            tempScore = st[id].score[current];
            item = current - 1;
            while(item >= 0 && st[id].score[item] > tempScore){
                st[id].score[item + 1] = st[id].score[item];
                st[id].score[item] = tempScore;
                item--;
            }
        }
    }
    
    for (int  currentId = 0; currentId <= n; currentId++) {

        for (int nextId = currentId + 1; nextId <= n; nextId++){
            isMax(st,currentId,nextId);
        }
    }
   
    printStudents(n,st); 
}

int main() {

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

