# include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"ENTER THE NUMBERS OF ARRAY"<<endl;

    for (int i = 0; i <= 4; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0 ;
}