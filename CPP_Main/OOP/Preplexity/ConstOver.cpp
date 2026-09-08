// Constructor overloading – theory
// Constructor overloading = having multiple constructors in the same class,
//  with different parameter lists, so you can create objects in different ways.


# include <iostream>
using namespace std;

class car
{
    private:
    string Name;
    int Model_num;
    int Seats;
    string Car_type;

    public :

    car(){
        Name = "Cadilac";
        Model_num = 100;
        Seats = 6;
        Car_type = "Xuv";
    }
    

};

int main(){
    
    return 0 ;
}