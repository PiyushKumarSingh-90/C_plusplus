                                // reverse order no.

#include <iostream>

using namespace std;

int main(){

    int i, reverse=0;
    cout<<"enter no. \n";
    cin>>i;

    while (i>0)
    {
        reverse = i % 10;
        cout << reverse;
        i = i/10;
    }


    return 0;
    
}

