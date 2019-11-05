#include <iostream>
#include <string>
#include <vector>

using namespace std;

class inputs {

    public:
    int age;
    std::string fname;
    std::string lname;

};

int main() {

    vector<inputs> info;

    int age;
    int index = 0;
    std::string fname;
    std::string lname;

    cout << "Enter your first name: ";
    cin >> fname;
    cout << endl;

    cout << "Enter your last name: ";
    cin >> lname;
    cout << endl;

    cout << "Enter your age: ";
    cin >> age;
    cout << endl;

    info[index].age = age;
    info[index].fname = fname;
    info[index].lname = lname;

    cout << "First Name: " << info[index].fname << endl;
    cout << "Last Name: " << info[index].lname << endl;
    cout << "Age: " << info[index].age << endl;
    
    return 0;
}