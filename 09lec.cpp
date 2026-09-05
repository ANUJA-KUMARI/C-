

#include<iostream>
using namespace std;

int main(){
    int age ;
    cout<<" enter your age " <<endl;
    cin>>age;
    if(age>=18){
        cout<<"you are adult \n";
    }else if(age<18){
        cout<<"you are not adualt ";
    }
    int value;
    cout<<" enter the value";
    swtich(value){
        case 1:
         cout<<"its one "
         break;
        case 2:
         cout<< " its 2"
         break;
        case 3:
         cout<<  "its 3";
         break;
        case 4:
         cout<< "its 4"
         break;
        default :
          cout<<"something larger than 4";
          break;
    }
    return 0;
}