// # include <iostream>
// using namespace std;
// int main(){
//     int arr[2][3];
//     cout<<"ENTER THE NUMBER"<<endl;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
    
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int arr[2][3];
//     cout<<"ENTER THE NUMBER"<<endl;
//     for (int i = 0; i < 2; i++)  for (int j = 0; j < 3; j++) cin>>arr[i][j];
//     for (int j = 0; j < 3; j++) { for (int i = 0; i < 2; i++) cout << arr[i][j]; cout << endl; }
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int arr[5][5];
//     // cout<<"ENTER THE NUMBER"<<endl;
//     for (int i = 0; i < 5; i++)  for (int j = 0; j < 5; j++) arr[i][j] = 10;
//     for (int j = 0; j < 5; j++) { for (int i = 0; i < 5; i++) cout << arr[i][j]; cout << endl; }
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int arr1[2][2];
//     cout<<"ENTER THE NUMBER"<<endl;
//     for (int i = 0; i < 2; i++)  for (int j = 0; j < 2; j++) cin>>arr1[i][j];
//     for (int j = 0; j < 2; j++) { for (int i = 0; i < 2; i++) cout << arr1[i][j]; cout << endl; }
    
    
//     int arr2[2][2];
//     cout<<"ENTER THE NUMBER"<<endl;
//     for (int i = 0; i < 2; i++)  for (int j = 0; j < 2; j++) cin>>arr2[i][j];
//     for (int j = 0; j < 2; j++) { for (int i = 0; i < 2; i++) cout << arr2[i][j]; cout << endl; }
    

//     int newArr[2][2];
    
//     for(int i = 0 ; i < 2 ; i++) for(int j = 0 ; j < 2 ; j++) newArr[i][j] = arr1[i][j]+arr2[i][j];
//     for(int i = 0 ; i < 2 ; i++) {for(int j = 0 ; j < 2 ; j++) cout<<newArr[i][j]<<" "; cout<<endl;}
//     return 0 ;
// }



# include <iostream>
using namespace std;
int main(){
    int arr[2][2];
    int sum = 0;

    cout<<"ENTER THE NUMBERS "<<endl;

    for(int i = 0 ; i < 2 ; i++) for(int j = 0 ; j < 2 ; j ++) cin>>arr[i][j];

    for(int i = 0 ; i < 2 ; i ++ ) for (int j = 0 ; j < 2 ; j ++ ) sum = sum + arr[i][j];  

    cout<<sum;
    return 0 ;
}