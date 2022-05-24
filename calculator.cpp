# include <iostream>
using namespace std;
int main()
{
    char op; int x,y;
    cout << "Enter operation: ";
    cin >> op;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    switch (op){
        case '+':
            cout << x + y;
            break;
        case '-':
            cout << x - y;
            break;
        case '*':
            cout << x * y;
            break;
        case '/':
            cout << x / y;
            break;
        defult:
            cout <<"Invalid operation!";
            break;

    }

return 0;
}