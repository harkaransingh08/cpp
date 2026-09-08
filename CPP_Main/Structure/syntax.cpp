// # include <iostream>
// using namespace std;

// struct student
// {
//     string Name;
//     int age;
//     float cgpa;
// };

// int main(){
//     student s1;

//     s1.Name = "Karan";
//     s1.age = 19;
//     s1.cgpa = 98;

//     cout<< s1.Name<<endl;
//     cout<< s1.age<<endl;
//     cout<< s1.cgpa<<endl;

//     student s2;
//     s2.Name = "Honey";
//     s2.age = 21;
//     s2.cgpa = 10;

//     cout<<s2.Name<<endl;
//     cout<<s2.age<<endl;
//     cout<<s2.cgpa<<endl;
//     return 0 ;
// }




# include <iostream>
using namespace std;

// struct student
// {
//     string Name;
//     int age;
//     float cgpa;
// };

// int main(){
//     student s1 = {"Karan" , 19 , 10};
//     cout<<s1.Name<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.cgpa<<endl;
//     return 0 ;
// }



// # include <iostream>
// # include <string>
// using namespace std;

// struct student
// {
//     string Name;
//     int age;
//     float cgpa;
// };

// int main(){
//     student s1;

//     cout<<"ENTER THE NAME OF STUDENT"<<endl;
//     getline(cin, s1.Name);
    
//     cout<<"ENTER THE AGE OF STUDENT"<<endl;
//     cin>>s1.age;

//     cout<<"ENTER THE CGPA OF STUDENT"<<endl;
//     cin>>s1.cgpa;

//     cout<<s1.Name<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.cgpa<<endl;
//     return 0 ;
// }




// # include <iostream>
// # include <string>
// using namespace std;

// struct student
// {
//     string Name;
//     int age;
//     float cgpa;
// };

// int main(){
//     student s[2];
//     for (int i = 0; i < 2; i++)
//     {
//         cout<<"ENTER THE NAME OF STUDENT"<<endl;
//         // getline(cin,s[i].Name);
//         cin>>s[i].Name;

//         cout<<"ENTER THE AGE OF STUDENT"<<endl;
//         cin>>s[i].age;

//         cout<<"ENTER THE CGPA OF STUDENT"<<endl;
//         cin>>s[i].cgpa;
//     }
//     cout<<endl;

//     for (int i = 0; i < 2; i++)
//     {
//         cout<<s[i].Name<< " " <<s[i].age << " " << s[i].cgpa << endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// struct address{
//     string city;
//     int pin;
// };
// struct student
// {
//     string Name;
//     int age;
//     float cgpa;
//     address add;
// };

// int main(){
//     student s1;

//     cout<<"ENTER THE NAME OF STUDENT"<<endl;
//     cin>>s1.Name;
    
//     cout<<"ENTER THE AGE OF STUDENT"<<endl;
//     cin>>s1.age;

//     cout<<"ENTER THE CGPA OF STUDENT"<<endl;
//     cin>>s1.cgpa;

    
//     cout<<"ENTER THE CITY OF STUDENT"<<endl;
//     cin>>s1.add.city;

    
//     cout<<"ENTER THE PIN OF STUDENT"<<endl;
//     cin>>s1.add.pin;


//     cout<<s1.Name<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.cgpa<<endl;
//     cout<<s1.add.city<<endl;
//     cout<<s1.add.pin<<endl;
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// struct Student
// {
//     string Name;
//     int age;
// };
// void print(Student s){
//     cout<<s.Name<<endl;
//     cout<<s.age<<endl;
// }
// int main(){
//     Student s1 = {"Karan",19};
//     print(s1);
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// # include <string>
// struct A_person
// {
//     string Name;
//     int age;
//     string city;
//     string phone_number;
// };
// void details(A_person p){
//     cout<<p.Name<<endl;
//     cout<<p.age<<endl;
//     cout<<p.city<<endl;
//     cout<<p.phone_number<<endl;
// }

// int main(){
//     A_person p1 = {"Karan" , 19 , "Kaithal" , "9416384630"};
//     details(p1);
//     return 0 ;
// }

