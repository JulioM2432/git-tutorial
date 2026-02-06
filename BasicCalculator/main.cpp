// libraries
#include <iostream>
using namespace std;

// file
#include "calculator.h"


int main(){
    Calculator values = Calculator();

    double result = values.add(1, 5);
    cout << result << endl;

    result = values.sub(1, 5);
    cout << result << endl;

    result = values.mul(1, 5);
    cout << result << endl;

    result = values.div(1, 5);
    cout << result << endl;
}