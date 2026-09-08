// # include <iostream>
// using namespace std;
// int main(){
//     int x = 4;
//     int y = 5;
//     int temp = x;

//     x=y;
//     y=temp;
//     cout<<x<<" "<< y <<endl;
//     return 0 ;
// }


# include <iostream>
using namespace std;
int main(){
    int x = 2;
    int y = 4;

    cout<<x<<" " << y<<endl;

    x = x+y;
    y = x-y;
    x = x-y;
 cout<<x<<" " << y<<endl;
    return 0 ;
}