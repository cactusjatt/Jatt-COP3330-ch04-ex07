#include "header.h"

int main() {

    string string1, string2;
    int value1, value2;
    char operation;

    cout << "Please input two numbers (single digit as digits or spelled out) and an operation (+, -, *, /): ";
    cin >> string1 >> string2 >> operation;
    
    value1 = parseValue(string1, 1);
    value2 = parseValue(string2, 2);

    if(value1 == -1) {
        cout << "Error, number 1 was invalid\n";
        return 0;
    }
    if(value2 == -1) {
        cout << "Error, number 2 was invalid\n";
        return 0;
    }

    if(operation == '+')
        cout << "The sum of " << value1 << " and " << value2 << " is " << value1+value2 << ".\n";
    else if(operation == '-')
        cout << "The difference of " << value1 << " and " << value2 << " is " << value1-value2 << ".\n";
    else if(operation == '*')
        cout << "The product of " << value1 << " and " << value2 << " is " << value1*value2 << ".\n";
    else if(operation == '/')
        cout << "The quotient of " << value1 << " and " << value2 << " is " << value1/value2 << ".\n";
    else
        cout << "Sorry, I don't know how to do this operation.\n";

    return 0;
}

int parseValue(string str, int location) {
    if(str == "zero" || str == "0")
        return 0;
    else if(str == "one" || str == "1")
        return 1;
    else if(str == "two" || str == "2")
        return 2;
    else if(str == "three" || str == "3")
        return 3;
    else if(str == "four" || str == "4")
        return 4;
    else if(str == "five" || str == "5")
        return 5;
    else if(str == "six" || str == "6")
        return 6;
    else if(str == "seven" || str == "7")
        return 7;
    else if(str == "eight" || str == "8")
        return 8;
    else if(str == "nine" || str == "9")
        return 9;

    else
        return -1;
}