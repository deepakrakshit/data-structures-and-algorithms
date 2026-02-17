#include <iostream>

using namespace std; 

int main(){
    
    int a = 10;
    int &r = a; // this means r is now the alias of a.. that means a or r both are same, this is called reference

    // also the reference should be declared + initilized at the same time i.e you cannot wirte int &r; (it will throw an error)

    r++; // value of a also increased
    
    // reference doesnot cosume memory, it uses the same memory

    cout<<r<<endl; // output: 11
    cout<<a<<endl; // output: 11

    int b = 30;
    r = b; // now r and a both stores the valude 30

    cout<<r<<endl<<a<<endl; // output: 30

    return 0;
}