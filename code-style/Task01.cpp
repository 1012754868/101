#include <iostream>
#include <math.h>

using namespace std;

int judge_odd_or_even(int n);
int judge_prime(int n);

int main() {
    int number; // Input a number
    cout<<"Please input a number :"<<endl;
    cin>>number;
    judge_odd_or_even(number); // To judge it is odd or even

    if(number < 2) {
        cout<<"The input number isn't a prime"<<endl; // to judge if it is prime
    }
    else {
        judge_prime(number);
    }
    system("pause"); // Pause for leaving time to check the result
    return 0;

}

int judge_odd_or_even(int n) { // Judge_odd_or_even function 
    if(n % 2 == 0) {
        cout<<"The input number "<<n<<" is even"<<endl;
    }
    else {
        cout<<"The input number "<<n<<" is odd"<<endl;
    }
    return 0;
}

int judge_prime(int n) { // judge_prime function
    int t;
    int temp = sqrt(n);
    for(int i = 2; i <= temp ; i++) {
        if(n % i == 0) {
           t = 0;
           break;
        } 
    }
    if(t) {
        cout<<"The input number is a prime"<<endl;
    }   
    else {
        cout<<"The input number isn't a prime"<<endl;
    }
    return 0;
}
