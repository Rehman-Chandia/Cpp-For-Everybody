#include <iostream>
using namespace std;
void sum_two();
void diffrence_two();
void multiply_two();
void divide_two ();
int main() {
    
    sum_two();
    diffrence_two();
    multiply_two();
    divide_two();
    return 0;
}
void sum_two(){
    int first = 0 , second =0 ;
    int sum = 0 ;
    cout <<"enter two integer values for sum :";
    cin >> first >> second ;
    sum = first + second;
    cout <<"The two values are : "<< first <<" , "<<second<<endl;
    cout <<"the sum is : "<< sum <<endl;
   

}
void diffrence_two(){
    int first = 0 , second =0 ;
     int diffrence = 0;
     cout<<"enter two integer values for Diffrence :";
    cin>> first >> second ;
    diffrence = first - second ;
    cout<<"The two values are : "<< first <<" , " <<second<<endl;
    cout <<"the diffrence is :"<< diffrence<<endl;
}
void multiply_two(){
    int first = 0 , second =0 ;
     int multiply = 0;
     cout<<"enter two integer values for Multiplication :";
    cin>> first >> second ;
    multiply = first * second ;
    cout<<"The two values are : "<< first <<" , " <<second<<endl;
    cout <<"the mutipication  is :"<< multiply<<endl;
    
}
void divide_two (){
    int first = 0 , second =0 ;
     int divide = 0;
     cout<<"enter two integer values for division :";
    cin>> first >> second ;
    divide = first / second ;
    cout<<"The two values are : "<< first <<" , " <<second<<endl;
    cout <<"the division is :"<< divide<<endl;
}
