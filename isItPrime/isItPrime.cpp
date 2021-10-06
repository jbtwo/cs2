#include <iostream>

using namespace std;

/*
 * 
 */

bool isItPrime(double number)
{
    //initialize final result bool
    bool finalResult;
    // check numbers starting from 2
    int curIndex = 2;
    // loop through all integers between 2 and input value
    while (number > curIndex)
    {
        // divide input by current index usint int and double
        double dubResult = number / curIndex;
        int intResult = number / curIndex;
        // compare results to determine if number is prime
        // equal result means number is not a prime
        if (dubResult == intResult)
        {
            finalResult = false;
            break;
        }
        // if result is not equal, increment and check next index
        else
        {
            curIndex++;
        }
        // if end of loop is reached, number is a prime
        finalResult = true;
    };
    return finalResult;
}

int main(int argc, char** argv)
{
    long input = 39916801;
    cout << isItPrime(input) << endl;
    return isItPrime(input);
}