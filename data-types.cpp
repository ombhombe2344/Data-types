//om bhombe
//23070123039
#include <string>
#include <iostream>
using namespace std;


int main() {
   
   
    int num;
    float decimal;
    char mychar;
    bool myBoolVar;
    string mystringvar;
    double num2;
    
    cout<<"Enter integer:";
    cin>>num;
    cout<<"Size is "<<sizeof(num)<<"\n";
    cout<<"Enter float:";
    cin>>decimal;
    cout<<"Size is "<<sizeof(decimal)<<"\n";
    cout<<"Enter char :";
    cin>>mychar;
    cout<<"Size is "<<sizeof(mychar)<<"\n";
    cout<<"Enter string :";
    cin>>mystringvar;
    cout<<"Size is "<<sizeof(mystringvar)<<"\n";
    cout<<"Enter a double :";
    cin>>num2;
    cout<<"Size is "<<sizeof(num2)<<"\n";
    cout<<"Enter a boolean: ";
    cin>>myBoolVar;
    cout<<"Size is "<<sizeof(myBoolVar)<<"\n";
}
/*
Enter integer:4
Size is 4
Enter float:4.1
Size is 4
Enter char :a
Size is 1
Enter string :word
Size is 32
Enter a double :45685
Size is 8
Enter a boolean: 01
Size is 1
*/