#include <iostream>
using namespace std;
int main () {
    int x, y, z;
    cout << "vared konid andazegirira: ";
    cin >> x >> y >> z;
    if (x < y + z && y < x + z && z < x + y)
        cout << "vorodi dorost!" << endl;
    else
        cout << "vorodi eshrebah! " << endl;

    return 0;
}
