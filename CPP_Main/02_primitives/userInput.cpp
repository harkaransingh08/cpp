# include <iostream>
# include <string>

using namespace std;

int main () {
    string userTea;
    int teaQuantity ;

    cout << "sirr will you order a tea \n";
    getline(cin,userTea);

    // ASK FOR QUANTITY
    cout << "sirr how much tea" << userTea << "will you prefer";
    cin >> teaQuantity;

    cout << teaQuantity;
    cout << userTea ;
    return 0;
}