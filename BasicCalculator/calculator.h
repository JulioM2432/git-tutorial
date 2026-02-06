class Calculator{
    char op;
    double num1, num2;

    public:
    // constructor
        // default constructor
        Calculator() = default;
        // param constructor
        Calculator(double val1, double val2){
            num1 = val1;
            num2 = val2;
        }
    // methods
        // addition function
        double add(double val1, double val2){
            cout << "Add: ";
            return val1 + val2;
        }
        // subtraction function
        double sub(double val1, double val2){
            cout << "Sub: ";
            return val1 - val2;
        }
        // multiplication function
        double mul(double val1, double val2){
            cout << "Mul: ";
            return val1 * val2;
        }
        // division function
        double div(double val1, double val2){
            if(val2 != 0){
                cout << "Div: ";
                return val1 / val2;
            }else{
                cout << "Error!" << endl;
                return -1;
            }
        }
        // modulus function
        int mod(int val1, int val2){
            if(val2 != 0){
                cout << "Div: ";
                return val1 % val2;
            }else{
                cout << "Error!" << endl;
                return -1;
            }
        }
        double pow(double val1, double val2){
            double result = 1;
            for(int i = 0; i < val2; i++){
                result *= val1;
            }
            cout << "Exponential: ";
            return result;
        }
};