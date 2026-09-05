//01 and 02 lecture was setting up the VS code and G++ complier 
// 03 variables and comments 
//04 is for various types of variable 
// 05 is for input out put stream 
// 06 for comparison operator , logical operator  and all 
#include<iostream>
using namespace std;
//GLOBAL VARIABLE ||referencevariable ||type casting 
int golbe;
int main(){
    cout<<" enter the value for global variablle ";
    cin>>::golbe;
    cout <<::golbe ; //:: this is scope resolution operator used to access the global variable 
    //tpe casting 
    int x=299;
    int *y =&x;// y is a pointer containd the address of x;
    cout<<x<<endl; //value at x;
    cout<<y<<endl; // address of x
    cout<<&x<<endl;// address of x
    cout<<&y<<endl; //address of y
    cout<< *y<<endl; //prints the value stored at the address which is in y 
    //type casting
    float a=892.747;
    cout<<int(a);

    return 0;
}