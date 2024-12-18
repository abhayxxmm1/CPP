#include <iostream>

using namespace std;

enum day {mon=2, tue, wed, thu=19, fri, sat, sun};
// enum is used for defining related constants under one name
enum dept {cs=1, it, ec, mech};
int main(){
    day d;
    d=mon;
    
    // mon++; Error check 
    dept dep=cs;

    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;

}