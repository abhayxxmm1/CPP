#include <cstdlib>
#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    //! C Lang code
    int *a=(int *)malloc(7* sizeof(int)); 
    a[0]=10;
    a[1]=10;
    a[2]=10;
    a[3]=10;
    a[5]=10;

    for(int i=0; i<7;i++){
        cout<< a[i]<<endl;
    }
    free(a); //* free the memory allocated by malloc


   //! C++ Lang code

    
    int *p=new  int[5]; //! dynamiclly allocating memory
    p[0]=40;
    p[2]=40;
    p[1]=40;
    p[3]=40;
    p[4]=40;

    for(int i=0; i<7;i++)
    cout<< p[i]<<endl;

    delete [] p; //* free the memory allocated by new
    return 0;
}