// libraries
#include <iostream>
using namespace std;

// file
#include "calculator.h"


int main(){
    Calculator values = Calculator();

    double result = values.add(5, 10);
    cout << result << endl;

    result = values.sub(5, 10);
    cout << result << endl;

    result = values.mul(5, 10);
    cout << result << endl;

    result = values.div(5, 10);
    cout << result << endl;

    cout << "Version2" << endl;

    result = values.mod(2, 1);
    cout << result << endl;
}