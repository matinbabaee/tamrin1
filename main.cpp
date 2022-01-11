#include <iostream>
using namespace std;
int main()
{
    string name, lastName;
    float x, y, z, ave;
    cout << "vared konid esm va famil: ";
    cin >> name >> lastName;
    cout << "3 nomre khodra vared konid: ";
    cin >> x >> y >> z;
    ave = (x+y+z)/3;
    if (ave >= 17)
        cout << "Great" << endl;
    else if (ave < 17 && ave >= 12)
        cout << "Normal" << endl;
    else if (ave < 12)
        cout << "Fail" << endl;
}
