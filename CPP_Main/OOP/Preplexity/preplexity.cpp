// # include <iostream>
// using namespace std;
// class Student {
//     public :
//     string Name;
//     int roll;
    
//     void PrintInfo(){
//         cout<<"Name :"<<Name << "roll :" << roll<<endl;
//     }
// };
// int main(){
//     Student s1;
//     Student s2;

//     s1.Name = "Harkaram";
//     s1.roll = 230;

//     s2.Name = "Karan";
//     s2.roll = 125;

//     s1.PrintInfo();
//     s2.PrintInfo();
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// class Car {
//     public:
//     string Name;
//     int Model_Num;
//     int Seats;
//     string Car_type;

//     void show(){
//         cout<<"Name :"<< Name<<"Model_Num :"<< Model_Num<<"seats :"<< Seats<<"type :"<< Car_type<<endl;
//     }
// };
// int main(){
//     Car c1 , c2;
    
//     c1.Name = "Mahindra Scorpio";
//     c1.Model_Num = 128;
//     c1.Seats = 7;
//     c1.Car_type = "Xuv";

//     c2.Name = "Mahindra Bolero";
//     c2.Model_Num = 120;
//     c2.Seats = 7;
//     c2.Car_type = "Xuv";

//     c1.show();
//     c2.show();
//     return 0 ;
// }



// # include <iostream>
// using namespace std;

// class Car {
//     private:
//     string Name;
//     int Model_Num;
//     int Seats;
//     string Car_type;

//     public:
//     Car(string name , int model , int seats , string type){
//         Name = name;
//         Model_Num = model ;
//         Seats = seats ;
//         Car_type = type;

//     }

//     void Print(){
//         cout<<"NAME :"<<Name<<endl;
//         cout<<"MODEL :"<<Model_Num<<endl;
//         cout<<"SEATS"<<Seats<<endl;
//         cout<<"TYPE"<<Car_type<<endl;
//     }
// };
// int main(){
//     Car c1("Boleno",7,9,"ghdjks");
//     Car c2 ("Scorpio",798,8,"XUV");

//     c1.Print();
//     c2.Print();

//     return 0 ;
// }



// # include <iostream>
// using namespace std;

// class Student {
//     public:
//     string Name ;
//     int RollNO;
//     int Marks;
    
//     void Print(){
//         cout<<"Name  :"<<Name<<"ROLL  :"<<RollNO<<"Marks  :"<<Marks<<endl;
//     }
// };
// int main(){
//     Student s1,s2;

//     s1.Name = "Harkaran";
//     s1.RollNO = 9;
//     s1.Marks = 90;

//     s2.Name = "honey";
//     s2.RollNO = 6;
//     s2.Marks = 80;

//     s1.Print();
//     s2.Print();
//     return 0 ;
// }



// # include <iostream>
// using namespace std;

// class Car{
//     public:
//     string Name;
//     int Model;
//     int Seats;
//     string Type;

//     void show(){
//         cout<<"Name :"<<Name<<endl;
//         cout<<"Model :"<<Model<<endl;
//         cout<<"Seats :" << Seats<<endl;
//         cout<<"Type :"<<Type<<endl;
//     }
//     void IsLargeCar(){
//         if (Seats>6)
//         {
//         cout<<"Name :"<<Name<<endl;
//         cout<<"Model :"<<Model<<endl;
//         cout<<"Seats :" << Seats<<endl;
//         cout<<"Type :"<<Type<<endl;
//         }
        
//     }
// };
// int main(){
//     Car c1,c2;

//     c1.Name = "Bolero";
//     c1.Model = 8;
//     c1.Seats = 8;
//     c1.Type = "XUV";

//     c2.Name = "Baleno";
//     c2.Model = 7;
//     c2.Seats = 4;
//     c2.Type = "Simple";

//     c1.show();
//     c2.show();
//     if (c1.Seats > c2.Seats)
//     {
//         c1.IsLargeCar();
//     }
//     else{
//         c2.IsLargeCar();
//     }
    
//     return 0 ;
// }





// # include <iostream>
// using namespace std;
// int main(){
//     for (int i = 0; i < 500; i++)
//     {
//         for (int j = 0; j < 500; j++)
//         {
            
//         }
        
//     }

       
//     return 0 ;
// }



// WRITE A PROGRAM TO GET A PRIME NUMBER
// # include <iostream>
// using namespace std;
// int main(){
//     int Input;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>Input;
//    for (int no = 0; no <Input; no++)
//    {
    
       
//        for (int i = 1; i <= no; i++)
//        {
//            if (no%i == 0)
//            {
//                cout<<no<<" IS DIVISIBLE BY :"<<i<<endl;
//             }
            
//         }
//     }

//     return 0 ;
    
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>a;
//     int b;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>b;
//     cout<<"Multiplication of a and b is :"<<a*b<<endl;
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     // int Number;
//     // cout<<"ENTER A NUMBER"<<endl;
//     // cin>>Number;
    
//     long long Number = 101;
//     for (int i = 2; i <= Number; i++)
//     {
//      if (Number%i==0)
//      {
//         cout<<i << " and "<<(Number/i)<<endl;
//         break;
//      }
                
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     unsigned int nummber =  4294967295;
//      int half = nummber<<31;
//     cout<<half<<endl;
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int num = 10;
//     bool IsPrime = true;


//     for (int i = 2; i < num; i++)
//     {
//         bool condition= num%i==0;
//         if (condition)
//         {
//             IsPrime = false;
//             break;
//         }        
//     }

//    // given IsPrime is a bool print "This no is prikme" if true else print "Not Prim"
   
//    if (IsPrime == 0)
//    {
//     cout<<"THIS IS NOT PRIME "<<endl;
//    }
//    else{
//     cout<<"THIS IS A PRIME NUMBER"<<endl;
//    }
   
//    return 0 ;
// }





// # include <iostream>
// using namespace std;
// int main(){
//     int Num1 ,Num2;
//     cout<<"ENTER NUMBER 1"<<endl;
//     cin>>Num1;

//     cout<<"ENTER NUMBER 2"<<endl;
//     cin>>Num2;

//     bool Condition = (Num1%5==0) && (Num2%5==0);
//     if (Condition)
//     {
//         cout<<"THESE BOTH NUMBER DIVIDED BY 5"<<endl;
//     }
//     else{
//         cout<<"THESE ARE NOT DIVISIBLE BY 5"<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int num1,num2,num3;
//     cout<<"ENTER THE NUMBER 1";
//     cin>>num1;
//     cout<<"ENTER THE NUMBER 2";
//     cin>>num2;
//     cout<<"ENTER THE NUMBER 3";
//     cin>>num3;

    
//     if (num1>num2 && num1>num3)
//     {
//         cout<<"THE NUMBER 1 IS GREATEST NUMBER ";
//     }

//     else if (num2>num1 && num2>num3)
//     {
//         cout<<"THE NUMBER 2 IS GREATEST NUMBER ";
//     }

//     else if (num3>num1 && num3>num2)
//     {
//         cout<<"THE NUMBER 3 IS GREATEST NUMBER ";
//     }
//     else{
//         cout<<"THE NUMBER NOT EXIST";
//     }
    
//     return 0 ;
// }




# include <iostream>
using namespace std;
int main(){
    
    return 0 ;
}