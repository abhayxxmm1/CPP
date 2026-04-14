#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int height;
    int breath;
};

int main(){
    Rectangle r={10,5};
    cout << r.height << endl;
    cout << r.breath << endl;

    struct Rectangle *p=&r;
    // this is in c
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //! dynamiclly allocating memory for structure

    // this is in c++
    p= new Rectangle;   // creates rectangle object in heap

    p->height=600; //! assigning value to structure members using pointer
    p->breath=20;
    cout  << p->height << endl;
    cout  << p->breath << endl;

    return 0;

}