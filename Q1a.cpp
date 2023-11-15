#include <iostream>
using namespace std;
int main() {
    int opt;
    int num1, num2, num3;
    cout<<"Enter the numbers: ";
    cin>>num1;
    cin>>num2;
    cin>>num3;

    switch (1){
        case (num1<num2 && num1<num3):
        cout<<"The smallest number is: "<<num1<<endl;
        break;
        case (num2<num1 && num2<num3):
        cout<<"The smallest number is: "<<num2<<endl;
        break;
        case (num3<num1 && num3<num2):
        cout<<"The smallest number is: "<<num3<<endl;
        break;
        default:

    }
    return 0;
    }