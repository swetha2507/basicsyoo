//
// Created by SWETHA S on 11/10/21.
//

#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"enter your name"<<endl;
    cin>> name;
    if(name == "alice"){
        cout<<"hello,alice "<< endl;
    }
    else if(name=="bob"){
        cout<<"hello,bob"<< endl;
    }
    else{
        cout<<"Sorry wrong input"<< endl;
    }
}
