#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    double x , y;
    string operand;

    cout << "Enter Two Numbers: ";
    cin >> x >>y;
    cout << "Enter Operand: ";
    cin >> operand;

    if (operand == "+")
        cout << "Result: " << x+y;
    else if (operand == "-")
        cout << "Result: " << x-y;
    else if (operand == "*")
        cout << "Result: " << x*y;
    else if (operand == "/")
    {
        if (y != 0)
            cout << "Result: " << x/y;
        else
            cout << "khata taqsim bar sefr";
    }
    else if (operand == "Rad")
        cout << "Result: " << sqrt(x);

    else if (operand == "Cos")
    {
       x = x * M_PI / 180;
        cout << "Result: " << cos(x);
    }

    else if (operand == "Tan")
    {
       x = x * M_PI / 180;
        cout << "Result: " << tan(x);
    }

    else if (operand == "Cot")
    {
        x = x * M_PI / 180;
        double t = tan(x);
        cout << "Result: " << 1/t;
    }

    else if (operand == "Fact")
    {
        double fact =1;
        for (long int i = 1; i <= x ; i++)
        {
            fact *= i;
        }
        cout << "Result: " << fact;
    }
    return 0;
}
