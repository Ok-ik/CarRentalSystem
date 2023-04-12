#include <iostream>
using namespace std;

class Calculator {
public:
    void add(int i, int a);
    void sub(int i, int a);
    void mult(int i , int a);
    void divi(int i, int a);
    void mod(int i , int a);
    void menu();
    void driver();
    void driver2();
    int a,x,y,result;
    char choice;
};

void Calculator::add(int i, int a) {
    result = i + a;
    cout << "Result:" << result << "\n";
}

void Calculator::sub(int i, int a) {
    result = i - a;
    cout << "Result:" << result << "\n";
}

void Calculator::mult(int i, int a) {
    result = i * a;
    cout << "Result:" << result << "\n";
}

void Calculator::divi(int i, int a) {
    result = i / a;
    cout << "Result:" << result << endl;
}

void Calculator::mod(int i, int a) {
    result = i % a;
    cout << "Result:" << result << endl;
}


void Calculator::menu() {
    cout<<"==============================================================="<<"\n";
    cout<<"                         MENU                                  "<<"\n";
    cout<<"==============================================================="<<"\n";
    cout<<"     1. Add"<<"\n";
    cout<<"     2. Subtract"<<"\n";
    cout<<"     3. Multiply"<<"\n";
    cout<<"     4. Divide"<<"\n";
    cout<<"     5. Modulo"<<"\n";

}

void Calculator::driver() {
    cout << "Enter your choice" << endl;
    cin >> a;
    switch(a){
    case 1:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        add(x,y);
        break;
    case 2:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        sub(x,y);
        break;
    case 3:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        mult(x,y);
        break;
    case 4:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        divi(x,y);
        break;
    case 5:
        cout << "Enter first number" << endl;
        cin >> x;
        cout << "Enter second number" << endl;
        cin >> y;
        mod(x,y);
        break;
    default:
        cout << "Invalid input. Try Again!" << endl;
    }

}

void Calculator::driver2() {
    do {
        driver();

    cout << "Do you want to continue? Y/N" << endl;
    cin >> choice;
    }
    while(choice == 'Y' || choice == 'y');
}


int main () {
    Calculator viki;
    viki.menu();
    viki.driver2();
    return 0;
} 