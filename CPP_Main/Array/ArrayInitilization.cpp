// # include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for (int i = 4; i >= 0; i--)
//     {
//         cout<<arr[i]*2 << " ";
//     }
//     // cout<<endl;
    
//     return 0 ;
// }


# include <iostream>
using namespace std;
void change(int x[]){
    x[0]=9;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i] << " ";
    }

    cout<<endl;
    change(arr);

    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0 ;
}