#include <iostream>
using namespace std;

int main() {
    int num, cube;

    cout << "Enter a number: ";
    cin >> num;

    cube = num * num * num;

    cout << "The cube of " << num << " is " << cube << endl;

    return 0;
}

