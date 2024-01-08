// #include<iostream>
// using namespace std;

//  void add(int x, int y)
// {
//   cout<<"addition of 'a' and 'b' is "<<a+b;
// }

// int main()
//{
//     int a,b;
//  cin>>a>>b;
//  cin>>b;

//     add(a,b);

//  return 0;
// }

#include <iostream>

using namespace std;

int add(int x, int y = 5, int r = 6)
{

  int z;
  z = x + y + r;
  return z;
}

int main()
{
  int a, sum;
  cout << "Enter value of a:"<< "\n";
  cin >> a;

  // cout<<"Enter value of b:"<<"\n";
  // cin>>b;

  // cout<<"Enter value of r:"<<"\n";
  // cin>>r;

  sum = add(a);

  cout << "addition is " << sum;

  return 0;
}