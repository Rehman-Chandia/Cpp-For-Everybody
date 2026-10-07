#include <iostream>
using namespace std;
int main() {
    int number1, number2, sum {0};
    cout<< " enter the nmbers :";
    cin>>number1>>number2;
    if (number1%2==1){
        cout<<"number1 is odd"<<endl;
    }else {
        cout<<"number1 is even"<<endl;
    }
    if (number2%2==1){
         cout<<"number2 is odd"<<endl;
    }else {
        cout<<"number2 is even"<<endl;
    }
    if (sum%2==1){
        cout<<"sum is odd";
    }else {
        cout<<"sum is even";
    }
    return 0;
}
