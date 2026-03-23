#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int a[5] = {10,24,2,642,42};
    int *p=a;
    int *p1=&a[0];

    for(int i=0; i<5;i++){
        cout<< a[i]<<endl;
        cout<< p[i]<<endl;
    }

    return 0;
}