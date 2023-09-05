//Task 2 
//A Simple Calculator
#include<iostream>
using namespace std;
int main(){
  int choice;
  cout<<"Enter your choice: ";
  cin>>choice;
  //Switch case
  switch(choice) {
    //Addition method
    case 1:
    int add, num1, num2;
    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    add = num1 + num2; 
    cout<<"The addition of two numbers will be: "<<add;
    break;

    //Subtraction method
    case 2:
    int sub, num3, num4;
    cout<<"Enter number1: ";
    cin>>num3;
    cout<<"Enter number2: ";
    cin>>num4;
    sub = num3 - num4;
    cout<<"The subtraction of two numbers will be: "<<sub;
    break;

    //Multiplication method
    case 3:
    int mul, num5, num6;
    cout<<"Enter number1: ";
    cin>>num5;
    cout<<"Enter number2: ";
    cin>>num6;
    mul = num5 * num6;
    cout<<"The multiplication of two numbers will be: "<<mul;
    break;


    //Division method
    case 4:
    int num7, num8;
    float div;
    cout<<"Enter number1: ";
    cin>>num7;
    cout<<"Enter number2: ";
    cin>>num8;
    div = num7 / num8;
    cout<<"The division of two numbers will be: "<<div;
    break;
    
    //Default
    default:
    cout<<"You've entered invalid choice. ";
    break;


  }
}
