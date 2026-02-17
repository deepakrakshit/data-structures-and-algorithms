#include<iostream>
#include <vector>
#include<stdio.h>

using namespace std;

int main (){

    int n;
    cout<<"Enter a number";
    cin>>n;
    vector<int> b(n); // you cannot initilize a array if using n

    for(int i = 0; i < n; i++){
        cout<<"Enter b[%d],", i;
        cin>>b[i];
    }
    for(int i = 0; i < n; i++){
        cout<<b[i]<<endl;
    }




    int a[5] = {1,4,6,8,22};
    cout<<sizeof(a)<<endl;
    cout<<"Hello World"<<endl;

    for(int i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }
    
    for(int x:a){
        cout<<x<<endl;
    }
}