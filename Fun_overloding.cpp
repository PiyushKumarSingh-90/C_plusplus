#include<iostream>
using namespace std;
void add(int a, int b)
{
    cout<<"Function 1 is called"<<endl;
    cout<<"Addition is "<<a+b<<endl;
}
void add(int a, int b, int c)
{
    cout<<"Function 2 is called"<<endl;
    cout<<"Addition is "<<a+b+c<<endl;
}
void add(double t, int b, int c)
{
    cout<<"Function 3 is called"<<endl;
    cout<<"Addition is "<<t+b+c<<endl;
}
int main()
{
    int a,b,c;
    double t;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    cout<<"Enter the value of c: "<<endl;
    cin>>c;
    cout<<"Enter the value of t: "<<endl;
    cin>>t;
    add(a,b);  //calling function 1
    add(a,b,c);//calling function 2
    add(t,b,c);//calling function 3
    return 0;
}


  