#include <iostream>

using namespace std;
void mynum(int &x, int &y) {
    int z = x;
    x = y;
    y = z;

}

int main() {
    int firstnum = 10;
    int secondnum = 12;

    mynum(firstnum,secondnum);
    cout << mynum;
}

