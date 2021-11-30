#include "header.h"

int main() 
{
    // Data dictionary
    int i;
    string operation;
    string operand1;
    string operand2;
    int operand1Num;
    int operand2Num;
    int correct;

    // All types of acceptable user inputs
    string corrInput[30] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    // Asks for user input
    cout << "Please enter your operation:\nOperation: "; 

    cin >> operation;
    cout << "\nOperand 1: ";
    cin >> operand1;

    // Checks if input was acceptable
    while (correct != 1)
    {
        for (i = 0; i < 30; i++)
        {
            if (operand1 == corrInput[i])
                correct++;
        }

        if (correct != 1)
        {
            cout << "\nAn invalid input was entered. Please enter operand 1: ";
            cin >> operand1;
        }
    }

    // Calls stringToNum to make the string into an int depending on input for operand 1
    operand1Num = stringToNum(operand1);

    // Reset flag
    correct = 0;

    // Asks for user input
    cout << "\nOperand 2: ";
    cin >> operand2;
    cout << "\n";

    // Checks if input was acceptable
    while (correct != 1)
    {
        for (i = 0; i < 30; i++)
        {
            if (operand2 == corrInput[i])
                correct++;
        }

        if (correct != 1)
        {
            cout << "\nAn invalid input was entered. Please enter operand 2: ";
            cin >> operand2;
        }
    }

    // Calls stringToNum to make the string into an int depending on input for operand 2
    operand2Num = stringToNum(operand2);

    // Output depending on operation
    if (operation == "+" || operation == "plus")
        cout << "The sum of " << operand1 << " and " << operand2 << " is " << operand1Num + operand2Num << ".\n";
    else if (operation == "-" || operation == "minus")
        cout << "The difference of " << operand1 << " and " << operand2 << " is "<< operand1Num - operand2Num << ".\n";  
    else if (operation == "*" || operation == "mul")
        cout << "The product of " << operand1 << " and " << operand2 << " is "<< operand1Num * operand2Num << ".\n";
    else if (operation == "/" || operation == "div")
        cout << "The quotient of " << operand1 << " and " << operand2 << " is "<< operand1Num / operand2Num << ".\n";

    return 0;
}

int stringToNum (string operand)
{
    // Data dictionary
    int operandNum;
    string corrInput[30] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    // Sets string to corresponding integer
    if (operand == corrInput[0] || operand == corrInput[10] || operand == corrInput[20])
        operandNum = 0;
    else if (operand == corrInput[1] || operand == corrInput[11] || operand == corrInput[21])
        operandNum = 1;
    else if (operand == corrInput[2] || operand == corrInput[12] || operand == corrInput[22])
        operandNum = 2;
    else if (operand == corrInput[3] || operand == corrInput[13] || operand == corrInput[23])
        operandNum = 3;
    else if (operand == corrInput[4] || operand == corrInput[14] || operand == corrInput[24])
        operandNum = 4;
    else if (operand == corrInput[5] || operand == corrInput[15] || operand == corrInput[25])
        operandNum = 5;   
    else if (operand == corrInput[6] || operand == corrInput[16] || operand == corrInput[26])
        operandNum = 6;
    else if (operand == corrInput[7] || operand == corrInput[17] || operand == corrInput[27])
        operandNum = 7;    
    else if (operand == corrInput[8] || operand == corrInput[18] || operand == corrInput[28])
        operandNum = 8;
    else 
        operandNum = 9;  

    return operandNum;    
}