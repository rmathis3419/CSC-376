// labUnions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "labUnions.h"
using namespace std;


struct ipAddress {
    unsigned int byteFour : 8;
    unsigned int byteThree : 8;
    unsigned int byteTwo : 8;
    unsigned int byteOne : 8;
};

union wholeAddress {
    ipAddress ipaddress;
    unsigned int whole : 32;
};


void four(wholeAddress a) {
    cout << "Which bit would you like to see?";
    int y;
    cin >> y;

    unsigned int result;

    if (y > 32 || y < 0) {
        cout << "Enter a number between 1 and 32";
        four(a);
    }

    result = (a.whole << (32 - y)) >> (31);

    cout << result << "\n";

}

void three(wholeAddress a) {

    int y;

    cout << "How many bits in the network address?";
    cin >> y;

    unsigned int result = 0;

    if (y > 32 || y < 0) {
        cout << "Enter a number between 1 and 32";
        three(a);
    }

    unsigned int firstHalf = a.whole;
    unsigned int secondHalf = a.whole;
    
    firstHalf = firstHalf << y;
    firstHalf = firstHalf >> y;

    secondHalf = secondHalf >> y;

    cout << secondHalf << ", " << firstHalf << "\n";


    /*unsigned int highMask = (1 << y) - 1;
    unsigned int lowMask = ~highMask;

    unsigned int high = (a.whole & highMask);
    unsigned int low = (a.whole & lowMask) << y;

    cout << high << ", " << low;*/

}



int main() {

    int input1;
    int input2;
    int input3;
    int input4;

    cout << "Enter an integer: \n";
    cin >> input1;

    cout << "Enter an integer: \n";
    cin >> input2;

    cout << "Enter an integer: \n";
    cin >> input3;

    cout << "Enter an integer: \n";
    cin >> input4;

    wholeAddress a;

    a.ipaddress.byteOne = input1;
    a.ipaddress.byteTwo = input2;
    a.ipaddress.byteThree = input3;
    a.ipaddress.byteFour = input4;

    int x;

    cout << "How would you like to see your IP address: ((1) single value, (2) four values, (3), two values, (4) a single bit value)";

    cin >> x;

    switch (x) {
    case 1:
        cout << a.whole;
        break;
    case 2:
        cout << a.ipaddress.byteOne << "." << a.ipaddress.byteTwo << "." << a.ipaddress.byteThree << "." << a.ipaddress.byteFour;
        break;
    case 3:
        three(a);
        break;
    case 4:
        four(a);
        break;
    }
    
}

struct birth_date {
    unsigned int day;
    unsigned int month;
    unsigned int year;

};

struct bday {
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 16;

};

union both {
    int one;
    int two;
};

struct halves {
    unsigned int right : 8;
    unsigned int left : 8;
};

union all {
    halves half;
    unsigned int whole : 16;
};


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


