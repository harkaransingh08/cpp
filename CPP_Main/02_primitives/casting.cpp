# include <iostream>

using namespace std;

int main () {
    float teaPrice = 49.99;
    int RoundTeaPrice = (int) teaPrice;
    
    int teaQuantity = 2;
    float TotalTeaPrice = teaPrice * teaQuantity;
    
    cout << TotalTeaPrice << endl;
    return 0;
}