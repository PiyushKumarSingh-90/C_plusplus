
   
//    #include <iostream>

// using namespace std;

// int main(){

//     int i,a,b ;
//     cout<<"enter 1st no. \n";
//     cin>>i;

//     cout<<"enter 2st no. \n";
//     cin>>a;

//     cout<<"enter 3st no. \n";
//     cin>>b;

//     if (i>a && i>b)
//     {
//       cout<<i<<"largest no.";
//     }

     
//     if(a>i && a>b) 
       
//     {
//          cout<<a<<"largest no.";
//     }
    
//     else 
//     {
//             cout<<b<<"largest no.";
        
//     }
        
      
//        return 0; 
//     }


                               //find largest no. using Function


    
#include <iostream>

using namespace std;


void largest_no(int i , int a, int b){

if (i>a && i>b)
    {
      cout<<i<<"largest no.";
    }
    
    else if(a>i && a>b) 
       
    {
      cout<<a<<"largest no.";
    }
    
    else 
    {
       cout<<b<<"largest no.";
        
    }

}

int main(){

    int i,a,b ;
    cout<<"enter 1st no. \n";
    cin>>i;

    cout<<"enter 2st no. \n";
    cin>>a;

    cout<<"enter 3st no. \n";
    cin>>b;

    // if (i>a && i>b)
    // {
    //   cout<<i<<"largest no.";
    // }

     
    // if(a>i && a>b) 
       
    // {
    //   cout<<a<<"largest no.";
    // }
    
    // else 
    // {
    //   cout<<b<<"largest no.";
        
    // }

    largest_no(i,a,b);
        
      
       return 0; 
    }