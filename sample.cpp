#include <iostream>

using namespace std;

int main (){

    int n;

    cout<<"Enter lines :  \n";
    cin>>n;

    for (int i = 0 ; i < n ; i++){

        for(int j = n-i ; j > 0 ; j--){
            cout<<" ";
        }
        for(int m = 0; m < i ; m++){
            cout<<"*";
            }

        for (int k = i ; k >= 0 ; k--){
            cout<<"*";
        }

        cout<<"\n";
    }


    return 0;
}