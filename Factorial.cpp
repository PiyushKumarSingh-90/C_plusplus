                                    // FACTORIAL

#include<iostream>

using namespace std;
 
 // addition of two no.

int main()
{

   int a ,fact=1,num;

    cout<<"Enter your factorial.\n";
    cin >> num ;

    for (int a=1; a<=num ; a++){
        fact = fact*a;
    }
    cout<<fact<<"\n"; 

    return 0;

}