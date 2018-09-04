#include <iostream>
#include "maths.h"
#include "main.h"

using namespace std;

int main() {
    int a;
    int b;
    cout<<"Please input two numbers"<<endl;
    cin>>a>>b;
    
    cout<<"The sum of the two numbers are = ";
    cout<<sum(a,b)<<endl;

    cout<<"The product of the two numbers are = ";
    cout<<product(a,b)<<endl;

    max(a,b);

    min(a,b);

    return 0;


}
