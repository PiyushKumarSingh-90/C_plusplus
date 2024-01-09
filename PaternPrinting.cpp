#include<iostream>

using namespace std;

// int main(){

//   int n;
//   cin >> n;
//   for ( int i = 1; i<=n; i++)
//   {
//     for (int j = 1; j<=i; j++)
//     {
//         cout <<i;
//     }
//     cout << endl;
    
//   }
//     return 0;
// }








//  int main(){

//   int n;
//   cin >> n;
//   for ( int i = 1; i<=n; i++)
//   {
//     for (int j = n; j>=i; j--)
//     {
//         cout <<" 💩 ";
//     }
//     cout << endl;
    
//   }
//     return 0;
// }









// int main(){

//   int n;
//   cin >> n;

//   for ( int i = 1; i<=n; i++)
//   {
//     for (int j = 1; j<=i; j++)
//     {
//         cout <<" 💩 ";
//     }
//     cout << endl;

//     if (i == n)
//     {
     
//       for ( int i = 1; i<=(n-1); i++)
//       {
//         for (int j = (n-1); j>=i; j--)
//         {
//         cout <<" 💩 ";
//         }

//         cout << endl;
    
//        }
//     }
//   }
//       return 0;
// }






// int main(){
//   int n;
//    cin>>n;
//    for ( int i = 1; i<=n; i++)
//  {
//        for (int j = n; j>=i; j--)
//      {
//         cout <<"  ";
//      }

//       for (int k = 1; k<=2*i-1; k++)
//       {
//         cout<<"💩";
        
//       }
      
//        cout<<endl;

//   }
//     return 0;
// }






int main(){

  int n;

  cout<<"Enter lines : \n";
  cin>>n;

  for (int i = 1; i<=n; i++)
  {
    for (int j = i-1 ; j>0 ; j--)
    {
      cout<<" ";
    }

    for (int k=i; k<=n; k++)
    {
      cout<<"*";
      
    }
    
    
    cout<<"\n";
    
    
  }
  return 0;
}
   

