#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int age;
    float part;

    cout << "Hello, young person!" << endl;

    cout << "How old are you? ";
    cin >> age;
    cout << "Hmmm, it looks like it will be ";
    cout << 70 - age;
    cout << " years before you can retire!" << endl;

    cin >> part;
    cout << "Why do you tell folks you are " << part;
    cout << " extra years old?" << endl;
}
