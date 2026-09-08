// # include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     int sum = 0;
//     cout<<"ENTER THE NUMBERS"<<endl;
//     for (int i = 0; i <=4; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 0; i <= 4; i++)
//     {
//         sum = arr[i]+sum;
//     }
//     cout<<sum;
    
    
//     return 0 ;
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5};
//     cout<<sizeof(arr);
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,23,5,6,78,8,64,4};
//     int n = sizeof(arr)/4;
//     int product = 1;
//     for (int i = 0; i <= n; i++)
//     {
//         product = product * arr[i];
//     }
//     cout<<product;
//     return 0 ;
// }


# include <iostream>
using namespace std;
int main(){
    int arr [] = {1,4,5,76,9,2,4,};
    int n = sizeof(arr)/4;
    int mx = arr[0];

    for (int i = 1; i < n; i++)
    {
        mx = max(mx,arr[i]);
    }
    cout<<mx;
    return 0 ;
}