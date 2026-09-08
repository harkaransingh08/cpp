// # include <iostream>
// using namespace std;
// struct BookDetails
// {
//     string bookName;
//     string Title;
//     int price;

// };

// void details(BookDetails b){
//     cout<<b.bookName<<endl;
//     cout<<b.Title<<endl;
//     cout<<b.price<<endl;
// }

// int main(){
//     BookDetails b1 = {"Flemingo" , "how to fuck" , 199};
//     details(b1);
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// struct Employee_details
// {
//     string Name;
//     int id;
//     string salary;
// };
// void output(Employee_details E){
//     cout<<E.id<<endl;
//     cout<<E.Name<<endl;
//     cout<<E.salary<<endl;
// }

// int main(){
//     Employee_details E1 = {"Karan" , 109 , "1212229"};
//     output(E1);
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// struct student_details
// {
//     string name;
//     int rollno;
//     int marks;
// };

// int main(){
//     student_details d[5];

//     for (int i = 0; i <5; i++)
//     {
//         cout<<"ENTER THE NAME OF STUDENT :"<<endl;
//         cin>>d[i].name;
//         cout<<"ENTER THE ROLLNUMBER OF STUDENT"<<endl;
//         cin>>d[i].rollno;
//         cout<<"ENTER THE MARKS OF STUDENT"<<endl;
//         cin>>d[i].marks;
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout<<d[i].name<<endl;
//         cout<<d[i].rollno<<endl;
//         cout<<d[i].marks<<endl;
//     }
    
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// struct student_details
// {
//     string name;
//     int rollno;
//     int marks;
// };

// int main(){
//     student_details d[2];
//     int mx = 0;
//     for (int i = 0; i <2; i++)
//     {
//         cout<<"ENTER THE NAME OF STUDENT :"<<endl;
//         cin>>d[i].name;
//         cout<<"ENTER THE ROLLNUMBER OF STUDENT"<<endl;
//         cin>>d[i].rollno;
//         cout<<"ENTER THE MARKS OF STUDENT"<<endl;
//         cin>>d[i].marks;
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         mx = max(mx,d[i].marks);
//         mx = max(mx,d[i].rollno);
//         // mx = max(mx,d[i].rollno);
//     }

//     cout<<"HIGHEST MARKS"<<mx<<endl;
    
    
//     return 0 ;
// }



