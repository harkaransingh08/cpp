//  1-n

// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i <= 20 ; i++)
//     {
//         cout<<i<<endl;
//     }
    
//     return 0 ;
// }

// 20-1

// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 20; i >= 1; i--)
//     {
//         cout<<i<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 2; i < 100; i+=2)
//     {
//         if (i%2 == 0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 100 ; i+=2)
//     {
//         cout<<i<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i < 100; i++)
//     {
//         if (i%3 == 0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 100 ; i++)
//     {
//         if (i%5 == 0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 100 ; i++)
//     {
//         if (i%7 == 0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }





// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 100 ; i++)
//     {
//         if (i%3 == 0 && i%5==0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 4; i <= 80 ; i++)
//     {
//         if (i%4 == 0)
//         {
//                 cout<<i<<endl;
            
//         }
        
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 100 ; i++)
//     {
//         if (i%2 != 0)
//         {
//          cout<<i<<endl;   
//         }
        
//     }
    
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int bag =0 ;
//     for (int i = 1; i <= 100 ; i++)
//     {
//         bag += i;
    
//     }
//     cout<<bag<<endl;
        
    
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int sum = 0;
//     for (int i = 100; i >=1; i--)
//     {
//         sum += i;
//     }
//     cout<<sum<<endl;    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Input;
//     cout<<"enter"<<endl;
//     cin>>Input;
//     for (int i = 1  ; i <= 100 ; i++)
//     {
//         if (i%Input == 0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int UserInput;
//     cout<<"ENTER NUMBER"<<endl;
//     cin>>UserInput;

//     for (int i = 0; i <= UserInput ; i++)
//     {
//         cout<<i<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int bag = 0;
//     for (int i = 0; i <= 100; i++)
//     {
//         bag+=i;
//     }
//     cout<<bag<<endl;

    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Input ;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>Input;
//     int Bag = 0;
    
//     for (int i = 0; i <= Input; i++)
//     {
//         Bag = Bag+i;
//     }

//     cout<<Bag<<endl;
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Input;
//     cout<<"ENTER THE NUMBER "<<endl;
//     cin>>Input;
    
//     // WE WILL DECLARE BAG 
//     int Bag = 0;

//     for (int i = 0; i <= Input; i++)
//     {
//         if (i%2 == 0 )
//         {
//             Bag = Bag+i;
//         }
//     }
//     cout<<Bag<<endl;
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Input ;
//     cout<<"ENTER THE NUMBER "<<endl;
//     cin>>Input;

//     int Bag = 0;

//     for (int i = 0; i <= Input; i++)
//     {
//         if (i%2 != 0)
//         {
//             Bag = Bag+i;
//         }
        
//     }
//     cout<<Bag<<endl;
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Input ;
//     cout<<"ENTER THE NUMBER "<<endl;
//     cin>>Input;

//     int bag = 0;

//     for (int i = 1; i <= Input; i++)
//     {
//         if (i%5 == 0)
//         {
//             bag ++;
//         }
//     }
//     cout<<bag<<endl;   
//     return 0 ;
// } 



// # include <iostream>
// using namespace std;
// int main(){
//     int Input ;
//     cout<<"ENTER THE NUMBER "<<endl;
//     cin>>Input;

//     int bag = 0;

//     for (int i = 1; i <= Input; i++)
//     {
//         if (i%2 == 0 && i%3 == 0)
//         {
//             bag ++;
//         }
//     }
//     cout<<bag<<endl;   
//     return 0 ;
// } 


// # include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << "Table of " << i << endl;

//         for (int j = 1; j <= 10; j++)
//         {
//             cout << i << " x " << j << " = " << i * j << endl;
//         }

//         cout << endl;
//     }

//     return 0;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i <= 100; i++)
//     {
//         if (i%3==0 && i%5==0)
//         {
//             cout<<"FizzBuzz"<<endl;
//         }
//         else if (i%3 == 0)
//         {
//             cout<<"Fizz"<<endl;
//         }
//         else if (i%5 == 0)
//         {
//             cout<<"Buzz"<<endl; 
//         }
//         else{
//             cout<<i<<endl;
//         }
//     }
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int bag = 0;
//     for (int i = 0; i <= 100; i++)
//     {
//         if (i%4 == 0)
//         {
//             if (i%8 == 0)
//             {
//                 cout<<bag<<endl;
//             }
//             else{
//                 cout<<i<<endl;
//             }
            
//         }

        
//     }
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i <= 100 ; i++)
//     {
//         if (i%7 == 0 && i%11 == 0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i <= 100; i++)
//     {
//         if (i%3 != 0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     for ( int i = 0; i <= 100 ; i++)
//     {
//         if (i%5 == 1)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int count = 0;
//     for (int i = 0; i <= 1000 ; i++)
//     {
//         if (i%9 == 0)
//         {
//             count ++;
//         }
//     }
//     cout<<count<<endl;
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int UserInput;
//     cout<<"ENTER YOUR NUMBER"<<endl;    
//     cin>>UserInput;
//     for (int i = 0; i <= UserInput ; i++)
//     {
//         cout<<i*i<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int UserInput;
//     cout<<"ENTER YOUR NUMBER"<<endl;    
//     cin>>UserInput;
//     for (int i = 0; i <= UserInput ; i++)
//     {
//         cout<<i*i*i<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Num;
//     cout<<"ENTER THE NUMBER "<<endl;
//     cin>>Num;
//     for (int i = 1; i <= Num ; i++)
//     {
//         if (Num%i ==0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int num ;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>num;
//     int Count = 0 ;

//     for (int i = 1; i <= num ; i++)
//     {
//         if (num%i == 0)
//         {
//             Count ++;
//             if (Count == 2)
//             {
//                 cout<<"YES IT IS A PRIME NUMBER"<<endl;
//             }
            
//         }
//     }
//     cout<<Count<<endl;
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int count = 0;
//     for (int i = 1; i <= 5 && count <5 ; i++)
//     {
//         for (int j = 5; j >= i; j--)
//         {
//             cout<<j<<endl;
//             count++;
//             if (count == 5)
//             {
//                 break;
//             }
            
//         }
        
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int bag = 0 ;

//     for (int i = 4; i < 10 ; i++)
//     {
//         bag++;    
//     }
//     cout<<bag<<endl;
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Sum = 0;
//     for (int i = 1; i <= 4; i++)
//     {
//         Sum = Sum+i;
//     }
//     cout<<Sum<<endl;
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Sum = 0;
//     for (int i = 1; i <= 4; i++)
//     {
//         if (i==1)
//         {
//             Sum = i;
//         }
//         else{
//             Sum = Sum * i;
//         }
        
//     }
//     cout<<Sum<<endl;
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int Count = 0 ;
//     for (int i = 2; i <= 100 ; i++)
//     {
//         if (100%i == 0)
//         {
//             Count++;
//             if (Count == 2)
//             {
//                 cout<<"Not a Prime Number"<<endl;
//             }
            
//         }
//         cout<<Count<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>n;

//     for (int i = 1; i <= n*10; i++)
//     {
//         if (i%n == 0)
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>n;

//     for (int i = 1; i <= 3*n+1; i+=3)
//     {
//         cout<<i<<" ";
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>n;

//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         cout<<a<<endl;
//         a = a*2;
//     }
    
// }


//  GP IS 3,12,48----

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>n;

//     int a = 3;

//     for (int  i = 0; i <= n; i++)
//     {
//         cout<<a<<endl;  
//         a = a*4;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"ENTER NUMBER"<<endl;
//     cin>>n;

//     for (int i = n/2; i >= 1; i--)
//     {
//         if (n%i ==0)
//         {
//             cout<<i<<endl;
//             break;
//         }
        
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i <= 100; i++)
//     {
//         if (i%2 ==0) continue;
//         {
//             cout<<i<<endl;
//         }
        
//     }
    
//     return 0 ;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int bag = 0;

//     for (int i = 0; i < 7; i++)
//     {
//         bag++;
        
//     }
//     cout<<bag<<endl;
    
//     return 0 ;
// }