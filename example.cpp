#include <iostream>
#include <conio.h>
using namespace std;

// Class Declaration

class person {
    
public:
    string name;
    int number;
};



//Main Function

int main() {
    // Object Creation For Class
    person obj;

    //Get Input Values For Object Variables
    cout << "Enter Name :";
    cin >> obj.name;

    cout << "Enter Number :";
    cin >> obj.number;

    //Show the Output
    cout << obj.name << ": " << obj.number << endl;

    getch();
    return 0;
}
