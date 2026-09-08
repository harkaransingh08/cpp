// # include <iostream>
// # include <string>

// using namespace std;

// int main (){
//     string name;
//     cout << "WHAT IS YOUR NAME" <<name << endl;
//     getline(cin,name);
//     return 0;
// }

// # include <iostream>

// using namespace std;

// int main (){
//     int age = 0;
//     cout << "what is your age brooo" << age << endl;
//     cin >> age ;
//     cout << "THEN YOUR AGE IS = " << age;
//     return 0;
// }


// # include <iostream>

// using namespace std;

// int main (){
//    float height = 0 ;
//    cout << "PLEASE ENTER YOUR HEIGHT = " << height << endl;
//    cin >> height ;
//    cout << "YOUR HEIGHT IS =>" << height;
//     return 0;
// }


// # include <iostream>

// using namespace std;

// int main (){
//    float temperature = 0;
//    cout << "ENTER TEMPERATURE IN CELSIUS °C" << temperature << endl ;
//    cin >> temperature  ;
//    cout << "TODAY'S TEMPERATURE IS " << temperature << "°C" << e ndl;
//    return 0;
// }


// # include <iostream>
// # include <string>
// using namespace std;

// int main (){
//     string CustomerName;
//     cout << "HELLO WHAT IS YOUR NAME" << CustomerName << endl;
//     getline(cin,CustomerName);
    
//     string teaName;
//     cout << "WHAT DO YOU LIKE SIRR" << teaName << endl;
//     getline(cin,teaName);
    
//     int Quantity ;
//     cout << "HOW MUCH QUANTITY WOULD YOU LIKE" << Quantity << endl;
//     cin >> Quantity;
    
//     cout << "HELLO " << CustomerName << endl;
//     cout << "YOU ORDERED => " << teaName << endl;
//     cout << "AND QUANTITY IS => " << Quantity << endl;




//     return 0 ;

// }



// # include <iostream>
// # include <string>

// using namespace std;

// int main () {
//     // FOR NAME
//     string Name;
//     cout << "WHAT IS YOUR NAME SIRR " << Name << endl;
//     getline (cin,Name); 
    
//     // FOR PIZZA NAME 
//     string PizzaName ;
//     cout << "SO SIRR WHICH PIZZA WOULD YOU LIKE" << PizzaName << endl;
//     getline(cin , PizzaName);
    
//     //  FOR SIZE
//     int Size ; 
//     cout << "WHICH SIZE WOULD YOU PREFER" << Size << endl;
//     cin >> Size;
    
//     //  FOR QUANTITY 
//     int Quantity;
//     cout << "HOW MUCH QUANTITY WOULD YOU LIKE SIRR " << Quantity << endl;
//     cin >>  Quantity;
    
//     // FINAL OUTPUT
//     cout << "HELLO " << Name << endl;
//     cout << "YOUR PIZZA IS => " << PizzaName << endl ;
//     cout << "YOUR PIZZA SIZE IS => " << Size << endl;
//     cout << "SO YOUR QUANTITY OF PIZZA IS => " << Quantity << endl;
    
//     return 0;
// } 



# include <iostream>
# include <string>

using namespace std;

int main (){

    // FOR NAME
    string Name ;
    cout<<"NAME"<<Name<<endl;
    getline(cin,Name);

    // FOR AGE
    int Age;
    cout<<"WHAT IS YOUR AGE"<<Age<<endl;
    cin >> Age;
    cin.ignore();

    // FOR CITY
    string City;
    cout<<"WHAT IS YOUR CITY"<<City<<endl;
    getline(cin,City);

    // FOR HOBBY
    string Hobby;
    cout<<"WHAT IS YOUR HOBBY"<<Hobby<<endl;
    getline(cin,Hobby);

    // FOR DREAM
    string Dream;
    cout<<"WHAT IS YOUR DREAM"<<Dream<<endl;
    getline(cin,Dream);


    // OUTPUT LINES
    cout<<"HELLO, MY NAME IS "<<Name<<endl; 
    cout<<"I AM "<<Age<< "YEARS OLD"<<endl; 
    cout<<"I LIVE IN "<<City<<endl; 
    cout<<"MY HOBBY IS "<<Hobby<<endl; 
    cout<<"MY DREAM IS TO BECOME A "<<Dream<<endl; 

    return 0;
}