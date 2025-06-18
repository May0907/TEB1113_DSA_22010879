// ID: 22010879 
// NAME: CHEAH SUET MAY
// EMAIL: CHEAH_22010879@UTP.EDU.MY
// LAB: 1
#include <iostream>
#include <string>
using namespace std;
struct Student {
    int ID;
    int phoneNumber;
    string email;
    string name;
};

int main() {
    Student students[2];
    for (int i = 0; i < 2; i++) {
        cout << "****************************" << endl;
        cout << "Enter details for student " << (i + 1) << ":" << endl;
        cout << "ID: ";
        cin >> students[i].ID;
        cin.ignore();
        cout << "Phone Number: ";
        cin >> students[i].phoneNumber;
        cout << "Email: ";
        cin >> students[i].email;
        cout << "Name : ";
        cin >> students[i].name;
    }
    return 0;
}
