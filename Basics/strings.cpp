#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Your full name is: " << fullName << endl;
}