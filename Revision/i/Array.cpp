# include <iostream>
using namespace std;
int main(){
    int nums[]={5,15,22,-1,-15,88};
    int size = 6;

    int Largest = INT_MIN;
    for (int i = 0; i <= size; i++)
    {
        // if (nums[i]<smallest)
        // {
        //     smallest = nums[i];
        // }
        Largest = max(nums[i],Largest);
    }
    cout<<nums[Largest]/size<<endl;

    return 0 ;
}