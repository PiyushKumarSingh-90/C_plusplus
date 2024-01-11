#include<iostream>

using namespace std;

int main(){
int marks ,arr[10]={};

    for (int i = 0; i <10 ; i++)
    
    {
        cout<<"marks of student roll no."<<i+1<<":"<<endl;
        cin>>marks;
        arr[i]=marks;

    }

    for (int i = 0; i < 10; i++)
    {
        cout<<"marks of student roll no. : "<<i+1<<" is "<<arr[i]<<endl;
        
    }
    

    return 0;
}