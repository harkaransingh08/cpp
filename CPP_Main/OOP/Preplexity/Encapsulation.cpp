// Encapsulation = wrapping data + functions into one unit 
// (class) and protecting the data from direc outside access

// inshot make data members private so that they cant be used 
// in main

// it avoids random code from outside changing important data in wrong ways

// EG

# include <iostream>
using namespace std;
class Car{
    private:
    string Name;
    int Model_num;
    int Seats;
    string Car_type;

    public:
    void setdata(string name , int model , int seats , string type){
        if (seats <= 0)
        {
            
            cout<<"INVALID NUMBER OF SEATS"<<endl;
            return;
        }
        Name = name;
        Model_num = model;
        Seats = seats;
        Car_type = type;
    }

    void show (){
        cout<<"Name :"<<Name<<"Model :"<<Model_num<<"Seats :"<<Seats<<"Type :"<<Car_type<<endl;
    }
};
int main(){
    Car c1 , c2;

    c1.setdata("Mahindra Scorpio" , 128 , 8 , "SUV");
    c2.setdata("Mahindra thar" , 18 , 23 , "SUV");

    c1.show();
    c2.show();
    return 0 ;
}