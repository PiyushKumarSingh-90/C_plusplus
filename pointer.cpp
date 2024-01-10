#include<iostream>

using namespace std;

int main(){

    int number = 10;

    int*ptr=&number;
    *ptr=20;

    number = 4;


    cout<<*ptr<<endl;

    return 0;
}

