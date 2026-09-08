// # include <iostream>
// using namespace std;
// int Fact(int x){
//     int f = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         f = f*i;
//     }
//     return f;
// }
// int main(){
//     int n ;
//     cout<<"enter n"<<endl;
//     cin>>n;

//     int r ;
//     cout<<"enter r"<<endl;
//     cin>>r;

//     int a = Fact(n);
   
//     int b = Fact(r);
    
//     int c = Fact(n-r);
   
//     cout<<a/(b*c)<<endl;
//     return 0 ;
// }


# include <iostream>
using namespace std;
int Per(int x){
    int p =1;
    for (int i = 1; i <= x; i++)
    {
        p = p*i;
    }
    return p;
}
int main(){
    int n ;
    cout<<"ENTER N"<<endl;
    cin>>n;

    int r;
    cout<<"ENTER R"<<endl;
    cin>>r;

    int a = Per(n);
    int c = Per(n-r);

    cout<<a/c<<endl;
    return 0 ;
}