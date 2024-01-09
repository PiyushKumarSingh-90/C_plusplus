#include <iostream>

using namespace std;

int main()
{

int n ,a;

cout<<"Enter no. u want : ";
cin>>n;

int arr[n];
int max;

for ( int i = 0; i < n; i++)
{
    cout<<i+1<<"  no. is " ;
    cin>>a;
    arr[i]=a;
  
}

for ( int i = 0; i < n; i++)
{
    cout<<arr[i]<<"\n";
  
}

max = arr[0];

for ( int i = 0; i < n; i++)
{
   
   if (max<arr[i]){
    max = arr[i];
   }
  
}

cout<<"largest no. : "<<max;
    
    
    
   
    
return 0;
}

