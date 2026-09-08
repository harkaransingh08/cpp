// # include <iostream>
// # include <string>
// using namespace std;
// class Student {
//     public:
//     string Name;
//     int RollNumber;
//     float cgpa;
// };
// int main(){
//     Student s1;

//     s1.Name = "karan";
//     s1.RollNumber = 82;
//     s1.cgpa = 8.5;

//     cout<<s1.Name<<endl;
//     cout<<s1.RollNumber<<endl;
//     cout<<s1.cgpa<<endl;
//     return 0 ;
// }


# include <iostream>
using namespace std;
class car{
    public:
    string name;
    int price;
    int seats;
    string type;
    car(){  //DEFAULT CONSTRUCTOR

    }
    car (string n , int r , int g , string d ) {
        name = n;
        price = r;
        seats = g;
        type = d;
    }
};

void print(car c){
    cout<<c.name<<" " <<c.price<<" " << c.seats<<" " <<c.type<<endl;
};
void change(car& c){
    c.name = "BMW";
}
int main(){
     car c1("Toyota fortuner",76,8,"dhjsk");
    
     car c3("bmw", 78897, 8, "sedan");
     
     car c4 = c1;

     car c2;

     c2.name = "AUDI";
     c2.price = 8903889;
     c2.seats = 8;
     c2.type = "sedan";


     print(c1);
     print(c2);
     print(c3);
     print(c4);
    return 0 ;
}