#include <iostream>
using namespace std;

int main(){
    int nitin = 10; 

    int &dijango = nitin; 

    int dahi = 25;
    dijango = dahi;
    
    cout << nitin << endl;
    cout << dijango << endl;
}