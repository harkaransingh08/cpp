// # include <iostream>
// using namespace std;
// int main(){
//     int age ;
//     cout<<"ENTER YOUR AGE"<<endl;
//     cin>> age;

//      cout<<"YOU ARE "<<age<<" YEARS OLD"<<endl;
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     double b = a;
//     cout<<b<<endl;
//     return 0 ;
// }





// # include <iostream>
// using namespace std;
// int main(){
//     double a =95.99;
//     int b = a;
//     cout<<b<<endl;
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int a = 7 , b = 2;
//     cout<<a/b<<endl;
//     cout<<(double)a/b<<endl;
//     // cout<<static_cast<double>(a)/b<<endl;
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int a, b;
//     cin>>a;
//     cin>>b;
//     cout<<"Sum: "<<a+b<<endl;
//     cout<<"Difference: "<<a-b<<endl;
//     cout<<"Product: "<<a*b<<endl;
//     cout<<"Quotient: "<<(double)a/b<<endl;
//     cout<<"Remainder: "<<a%b<<endl;
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     char Alphabet = 'd';
//     cout<<"so the final letter is: " <<(char)(Alphabet-32)<<endl;
//     return 0 ;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     bool x = 0;
//     cout<<x<<endl;
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int Temp;
//     cout<<"ENTER THE TEMPERATURE"<<endl;
//     cin>>Temp;

//     double Fahrenheit = (Temp*9.0/5+32);
//     cout<<"THE CONVERTED TEMP IS: "<<Fahrenheit<<endl;
//     return 0 ;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int Num ;
//     cout<<"ENTER NUMBER"<<endl;
//     cin>>Num;

//     if (Num & 1)
//     {
//         cout<<"ODD"<<endl;
//     }
//     else{
//         cout<<"EVEN"<<endl;
//     }
//     if (Num>0)
//     {
//         cout<<"POSITIVE"<<endl;

//     }
//     else if (Num<0)
//     {
//         cout<<"Negative"<<endl;
//     }
//     else{
//         cout<<"ZERO"<<endl;
//     }
//     return 0 ;
// }





// # include <iostream>
// using namespace std;
// int main(){
//     int x = 5;
//     if (x = 0)
//     {
//         cout<<x<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int age = 20;
//     bool hasID = true;

//     if (age>=18)
//     {
//         if (hasID)
//         {
//             cout<<"ENTRY ALLOWED";
//         }else{
//             cout<<"BRING YOUR ID"<<endl;
//         }
//     }
//     else{
//         cout<<"YOUNG"<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int day = 3;

//     switch (day)
//     {
//     case 1:
//         cout<<"Monday"<<endl;
//         break;
//     case 2:
//         cout<<"Tuesday"<<endl;
//         break;
//     case 3:
//         cout<<"Wednesday"<<endl;
//         break;
//     case 4:
//         cout<<"Thrusday"<<endl;
//         break;
//     case 5:
//         cout<<"Friday"<<endl;
//         break;
    
//     default:
//         break;
//     }
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     char a ;
//     cout<<"ENTER THE CHARACTER"<<endl;
//     cin>>a;

//     if (a>='A' && a<='Z' || a>='a' && a<='z')
//     {
//         if (a == 'a' || a=='e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a=='E' || a == 'I' || a == 'O' || a == 'U')   
//         {
//             cout<<"VOVEl"<<endl;
//         }
//         else{
//             cout<<"Consonant"<<endl;
//         }
//     }
//     else{
//         cout<<"Not a letter"<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     double a , b;
//     char Digit;
//     cout<<"enter number1"<<endl;
//     cin>>a;
//     cout<<"enter number2"<<endl;
//     cin>>b;
//     cout<<"ENTER THE OPERATOR"<<endl;
//     cin>>Digit;

//     switch (Digit)
//     {
//     case '+' :
//         cout<<"The total Sum: " <<(double)a+b<<endl;
//         break;
//     case '-' :
//         cout<<"The total Difference: " <<(double)a-b<<endl;
//         break;
//     case '*' :
//         cout<<"The Multiplication: " <<(double)a*b<<endl;
//         break;
//     case '/' :
//         cout<<"The Division: " <<(double)a/b<<endl;
//         break;
    
//     default:
//         break;
//     }

//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout<<i<<endl;
//     // }
    
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int n = 823;
//     while (n>0)
//     {
//         cout<<n%10<<"";
//         n = n/10;
//     }
        
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int x;
//    do
//    {
//     cout<<"ENTER A POSITIVE NUMBER"<<endl;
//     cin>>x;
//    } while (x<=0);
   
        
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= 3; j++)
//         {
//             cout<<i << "," << j << " " <<endl;
//         }
        
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int number = 4523;
//     int Total = 0;
//     while (number>0)
//     {
//         Total = number%10+ Total;
//         number = number/10;
//     }
//     cout<<Total<<endl;
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for (int i = 0; i <= n; i++)
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
//     int n = 5;
//     for (int i = 1; i <= n ; i++)
//     {
//         for (int j = 1; j <= n-i+1; j++)
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
//     int n = 5;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = n; j >= n-i+1; j--)
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
//     int n = 5;
//     int bag = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<bag<<" ";
//             bag++;
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }





// # include <iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int num = 5;
//     int bag = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         bag = i*num;
//         cout<<i<<" X "<<num<<": "<<bag<<endl;
//     }
    
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int bag = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         bag = i*i;
//         cout<<bag<<endl;
//     }
    
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int bag = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         bag = i*i*i;
//         cout<<bag<<endl;
//     }
    
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 'A'; j <= 'Z'; j++)
//         {
//             cout<<(char)j<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }
 



// # include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     int bag = 1;
//     for (int i = bag; i <= n; i++)
//     {
//         for (int j = 0; j <= n; j++)
//         {
//             cout<<bag<<" ";
//             bag++;
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }








// # include <iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     char bag = 'A';
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 'A'; j <= n+64; j++)
//         {
//             cout<<bag<<" ";
//             bag++;
//         }
//         cout<<endl;
//     }
    
//     return 0 ;
// }





# include <iostream>
using namespace std;
int main(){
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1 ; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0 ;
}






















