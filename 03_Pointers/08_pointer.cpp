#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int a = 10;
    int *p;
    p=&a; //! &a means the address of a

    cout << a  << endl;
    cout << a  << endl;
    cout << a  << endl;
    printf("using pointer de-refrencing %d ", *p ); // *p means go to he address and take the value
    //!           de-refrencing👆


    
    printf("p is printing address -> %d %d", p, &a); 

    return 0;
}