// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>n;
    
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= n; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Row;
//     cout<<"ENTER ROWS"<<endl;
//     cin>>Row;

//     int Column;
//     cout<<"ENTER COLUMN"<<endl;
//     cin>>Column;

//     for (int i = 1; i <= Row; i++)
//     {
//         for (int j = 1; j < Column; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>n;

//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>n;

//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     // int n;
//     // cout<<"ENTER THE NUMBER "<<endl;
//     // cin>>n;

//    for (int i = 0; i <= 5; i++)
//    {
//     for (int j = 0; j <= i; j++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//    }
   
    
//     return 0 ;
// }



    // # include <iostream>
    // using namespace std;
    // int main(){
    //     for (int i = 1; i <= 5; i++)
    //     {
    //         for (int j = 0; j <= i; j++)
    //         {
    //             cout<<j;
    //         }
    //         cout<<endl;
    //     }
        
    //     return 0 ;
    // }


// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 4; i >= 0; i--)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     for (int row = 5; row > 0; row--)
//     {
//         for (int column = 0; column < row; column++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
    
//     return 0 ;
// }   


// # include <iostream>
// using namespace std;
// int main(){
//     for (int row = 5; row > 0; row--)
//     {
//         for (int column = 1; column <= row; column++)
//         {
//             cout<<column;
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for (int i = n; i >= 0; i--)
//     {
//         for (int j = i; j <= n; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//    for (int i = 1; i <= n; i++)
//    {
//     for (int j = 1; j <= i; j++)
//     {
//         cout<<j;
//     }
//     cout<<endl;
//    }
   
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             if ((i+j)%2 == 0)
//             {
//                 cout<<1;
//             }
//             else{
//                 cout<<0;
//             }
            
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i==3 || j==3)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;  
        
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     // int n = 5;
//     for (int i = 1; i <= 4; i++)
//     {for (int j = 1; j <= 6; j++)
//         {if (i == 1 || i == 4 || j == 1 || j == 6)
//                 cout << "*";
//             else cout << " ";
//         }cout<<endl;
//     }
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int n = 5;

//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = 1; j <=5; j++)
//         {
//             if (i == j  || (i+j) == (n+1)){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4; // Using 4 to match the image example, works for 7 too!

//     for (int i = 1; i <= n; i++)
//     {
//         // 1. Shifting Spaces: decreases as 'i' increases
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "  "; // Match spacing with the stars
//         }
        
//         // 2. Constant Stars: always prints exactly 'n' stars
//         for (int j = 1; j <= n; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;     
//     }
    
//     return 0;
// }