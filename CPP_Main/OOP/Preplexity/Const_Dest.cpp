// // CONSTRUCTURE 
// // -> IT IS A SPECIAL FUNSTION INSIDE A CLASS THAT RUNS AUTOMATICALLY WHEN AN OBJECT IS CREATED

// // BASIC PATTERN

// // class Car{
// //     public:
// //     car(){}
// // };




// # include <iostream>
// using namespace std;
// class Car{
//     private:
//     string Name;
//     int Model_num;
//     int Seats;
//     string Car_type;

//     public:
//     Car (string name , int model , int seats , string type){
//         if (seats <= 0)
//         {
            
//             cout<<"INVALID NUMBER OF SEATS"<<endl;
//             return;
//         }
//         Name = name;
//         Model_num = model;
//         Seats = seats;
//         Car_type = type;
//     }

//     void show (){
//         cout<<"Name :"<<Name<<"Model :"<<Model_num<<"Seats :"<<Seats<<"Type :"<<Car_type<<endl;
//     }
// };
// int main(){
//      Car c2("Mahindra Bolero", 120, 0, "SUV");
//      Car c1 ("Mahindra Thar " , 19, 832, "Suv");
//     c1.show();
//     c2.show();
//     return 0 ;
// }




//  CAR CLASS WITH BOTH CONSTRUCTURES

# include <iostream>
using namespace std;
class Car {
    private:
    string Name;
    int Model_num;
    int Seats;
    string Car_type;

    public:
    Car(){
        Name = "Unknown";
        Model_num = 0;
        Seats = 4;
        Car_type = "Sedan";
    }
    Car(string name , int model , int seats, string type){
        Name = name;
        Model_num = model;
        Seats = seats;
        Car_type = type;
        if (seats <= 0) {
            cout << "INVALID NUMBER OF SEATS, setting default to 4" << endl;
            Seats = 4;
        } else {
            Seats = seats;
        }
    }
    void Print(){
        cout << "Name: " << Name << ", Model: " << Model_num << ", Seats: " << Seats << ", Type: " << Car_type << endl;
    }
    };
int main(){
    Car c1;

    // Uses parameterized constructor
    Car c2("Mahindra Scorpio", 128, 7, "SUV");

    c1.Print();
    c2.Print();
    return 0 ;
}