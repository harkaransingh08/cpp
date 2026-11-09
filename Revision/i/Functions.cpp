


// SYNTAX

// returnType PrintHello(){
//     cout<<"Hello";
// };



// # include <iostream>
// using namespace std;


// int printHello(){
//     cout<<"Hello\n";
//     return 3;
// }

// int main(){

//     cout<<printHello();
//     return 0 ;
// }



// # include <iostream>
// using namespace std;

// int sum(int a , int b){
//     int s = a+b;
//     return s;
// }

// int main(){
//     cout<<sum(10,5);
//     return 0 ;
// }


// # include <iostream>
// using namespace std;

// int minOfTwo(int a , int b ){
//     if (a<b)
//     {
//         cout<<a<<" IS SMALLER THAN "<<b<<endl;
//     }
//     else{
//            cout<<b<<" IS SMALLER THAN "<<a<<endl;
//     }
//     return a;
// }

// int main(){
//     cout<<minOfTwo(4,6);
//     return 0 ;
// }



// # include <iostream>
// using namespace std;

// int sumN(int n){
//     int sum = 0;
//     for (int i = 0; i <= n; i++)
//     {
//         sum+=i;
//     }
//     return sum;
// }

// int main(){
//     cout<<"Sum = "<<sumN(5)<<endl;
//     return 0 ;
// }


// # include <iostream>
// using namespace std;

// int NFactorial(int n){
//     int Fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         Fact = Fact*i;
//     }
//     return Fact;
// }

// int main(){
//     cout<<"The fact of Number is "<<NFactorial(5);
//     return 0 ;
// }



// PASS BY VALUE

// # include <iostream>
// using namespace std;

// void sum(int x ){
//     x = 2*x;
//     cout<<"x = " << x <<endl;
// }

// int main(){
//     int x = 5;
//     sum(x);
//     cout<<"x = "<<x <<endl;
//     return 0 ;
// } 



// # include <iostream>
// using namespace std;

// int sumOFdigit(int n){
//     int sum = 0;
//     while (n>0)
//     {
//         int lastDig = n%10;
//         n = n/10;
//         sum += lastDig;
//     }
//     return sum;
// }

// int main(){
//     cout<<sumOFdigit(2345);
//     return 0 ;
// }




 # include <iostream>
 using namespace std;

 int Bionomial(int n , int r){
    int FactforN = 1;
    for (int i = 1; i <= n; i++)
    {
        FactforN *= i;
    }
    int FactforR = 1;
    for (int j = 1; j <= r; j++)
    {
        FactforR *= j;
    }
    int nMinr = n-r;
    int FactNminr = 1;
    for (int k = 1; k <= nMinr; k++)
    {
        FactNminr *= k;
    }
    
    int Coff = FactforN/(FactforR*FactNminr);
    return Coff;
 }

 int main(){
    cout<<Bionomial(8,2);
    return 0 ;
 }


















































































































