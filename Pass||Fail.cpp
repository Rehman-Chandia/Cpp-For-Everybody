#include <iostream>
using namespace std;
int main() {
    int sub_count , passing_limit  , start_limit  , end_limit ;
    float sub_average, sum, sub_marks{0};
    cout<< "Enter sub_count"<<" ";
    cin>> sub_count;   
    cout <<"Enter passing_limit"<<" ";
    cin>> passing_limit;
    cout<<"Enter start_limit"<<" ";
    cin>> start_limit;
    cout << "Enter End_limit"<<" ";
    cin>> end_limit;
for (int i ; i<=sub_count; i++){
         do{ cout<< "Please enter marks sub"<< i << endl;
            cin>> sub_marks;
        }while(sub_marks< start_limit|| sub_marks> end_limit );
            if (sub_marks>=passing_limit)
             cout<<"Pass"<<endl;
        else
                cout<< " Fail"<<endl;
                 sum += sub_marks;
            
}
