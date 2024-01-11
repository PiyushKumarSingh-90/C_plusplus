#include<iostream>
using namespace std;

int main() {

int i=1,n ,sum=0;
cout<<"Enter the number \n";
cin>>n;
//     for (i = 1; i <= n; i++) 
//     {
//         sum += i;
        
//     }
//     cout << sum << endl;

while (i <= n)
{
    sum += i;
    i++;
}
cout << sum << endl;


    return 0;
}
    



