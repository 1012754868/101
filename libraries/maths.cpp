#include <iostream>
#include "maths.h"

using namespace std;

int sum(int a, int b) {
    return (a + b);
}

int product(int a, int b) {
    return (a * b);
}

int max(int a, int b) {
    if(a > b) {
        cout<<"The max number is = "<<a<<endl;
    }
    else {
        cout<<"The max number is = "<<b<<endl;
    }
    return 0;
}

int min(int a, int b) {
    if(a < b) {
        cout<<"The min number is = "<<a<<endl;
    }
    else {
        cout<<"The min number is = "<<b<<endl;
    }
    return 0;
}
