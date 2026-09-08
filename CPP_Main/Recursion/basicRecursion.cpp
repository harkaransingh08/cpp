// # include <iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return ;
//     cout<<n<< "" ;
//     print(n-1);
// }
// int main(){
//     print(5);
//     return 0 ;
// } 


// # include <iostream>
// using namespace std;
// int print(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;
//     return print(n-1) + print(n-2);
// }
// int main(){
//     cout<<print(5);
//     return 0 ;
// } 

// # include <iostream>
// using namespace std;
// void print(int n){
//     if(n==10) return;
//    cout<<n<<endl;
//    print(n+1);
// }
// int main(){
//     print(1);
//     return 0 ;
// } 

// # include <iostream>
// using namespace std;
// void print(int x , int n ){
//     if (x>n) return;
//     cout<<x<<endl;
//     print(x+1,n);
// }
// int main(){
//     print(1,10);
//     return 0 ;
// } 


// # include <iostream>
// using namespace std;
// void print(int x , int n ){
//     if (x>n) return;
//     cout<<x<<endl;
//     print(x+1);
// }
// int main(){
//     print(1,10);
//     return 0 ;
// }   


// # include <iostream>
// using namespace std;

// int sum (int x){
//     if(x == 0) return 0;
//     return x + sum(x-1);
// }
// int main(){
//     cout<<sum(5);
//     return 0 ;
// }


// # include <iostream>
// using namespace std;

// int fact (int x){
//     if(x == 0) return 1;
//     return x * fact(x-1);
// }
// int main(){
//     cout<<fact(5);
//     return 0 ;
// }


// # include <iostream>
// using namespace std;

// int power (int x , int n){
//     if(n == 0) return 1;
//     return x * power(x,n-1);
// }
// int main(){
//     cout<<power(5,5);
//     return 0 ;
// }



// # include <iostream>
// using namespace std;

// void print (int x){
//     if(x == 0) return;
//     print(x-1);
//     cout<<x<<endl;
// }
// int main(){
//    print(5);
//     return 0 ;
// }


// # include <iostream>
// using namespace std;

// void print (int x){
//     if(x == 0) return;
//     cout<<x<<endl;
//     print(x-1);
// }
// int main(){
//    print(5);
//     return 0 ;
// }



# include <iostream>
using namespace std;

void print (int x){
    if(x == 0) return;
    if (x%2 == 0)
    {
        cout<<x<<endl;
        /* code */
    }
    
    print(x - 2);
}

int main(){
    print(100);
    return 0 ;
}