// # include <iostream>
// using namespace std;
// int main()
// {
//     int number ;
//     cout<<"ENTER ANY NUMBER FROM 1-100"<<endl;
//     cin>>number;
//     if (number%2 == 0)
//     {
//         cout<<"NUMBER IS EVEN";
//     }
//     else{
//         cout<<"NUMBER IS ODD";
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout<<"ENTER THE NUMBER"<<endl;
//     cin>>number;

//     if (number == 0)
//     {
//         cout<<"THE GIVEN NUMBER IS ZERO";
//     }
//     else if (number > 0)
//     {
//         cout << "THE GIVEN NUMBER IS POSTIVE";
//     }
//     else if (number < 0)
//     {
//         cout << "THE GIVEN NUMBER IS NEGATIVE";
//     }
//     else
//     {
//         cout << "NOT A WHOLE NUMBER";
//     }
    
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"ENTER YOUR AGE";
//     cin>>age;

//     if (age>=18)
//     {
//         cout<<"HE/SHE CAN VOTE"<<endl;
//     }
//     else if (age<18)
//     {
//         cout<<"HE/SHE CAN'T VOTE"<<endl;
//     }
//     else
//     {
//         cout<<"WRONG AGE"<<endl;
//     }
    
    
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"ENTER A NUMBER TO CHECK WETHER A NUMBER IS DIVISIBLE BY 3 OR 5";
//     cin>>number;
//     if (number%3 == 0 && number%5==0)
//     {
//         cout<<"Divisible"<<endl;
//     }
//     else{
//         cout<<"NOT DIVISIBLE"<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int FirstNumber;
//     cout<<"ENTER YOUR FIRST NUMBER"<<endl;
//     cin>>FirstNumber;

//     int SecondNumber;
//     cout<<"ENTER YOUR SECOND NUMBER"<<endl;
//     cin>>SecondNumber;

//     int ThirdNumber;
//     cout<<"ENTER YOUR THIRD NUMBER"<<endl;
//     cin>>ThirdNumber;

//     if (FirstNumber>SecondNumber && FirstNumber>ThirdNumber)
//     {
//         cout<<"FIRT NUMBER IS THE LARGEST AMONG THEM"<<endl;
//     }
//     else if (SecondNumber>FirstNumber && SecondNumber>ThirdNumber)
//     {
//         cout<<"SECOND NUMBER IS THE LARGEST AMONG THEM"<<endl;
//     }
//     else if(ThirdNumber>FirstNumber && ThirdNumber>SecondNumber)
//     {
//         cout<<"THIRD NUMBER IS THE LARGEST"<<endl;
//     }
//     else
//     {
//         cout<<"not exist"<<endl;
//     }
    

//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int Year;
//     cout<<"ENTER YEAR"<<endl;
//     cin>>Year;

//     if ((Year%4 == 0 && Year%100 != 0) || (Year%400 == 0))
//     {
//         cout<<"LEAP YEAR"<<endl;
//     }
//     else
//     {
//         cout<<"NOT A LEAP YEAR"<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     char Character;
//     cout<<"ENTER THE APHLABET"<<endl;
//     cin>>Character;

//     if ((Character>= 'A' && Character<='Z' ) || 
//     (Character>='a' && Character<='z'))
//     {
//         cout<<"ALPHABET"<<endl;
//     }
//     else{
//         cout<<"not alphabet"<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     char Character;
//     cout<<"ENTER ALPHABET"<<endl;
//     cin>>Character;

//     if ((Character == 'a' || Character == 'e' || Character =='i' || Character == 'o' || Character == 'u') ||
//         ((Character == 'A' || Character == 'E' || Character =='I' || Character == 'O' || Character == 'U'))
//     )
//     {
//         cout<<"VOWEL"<<endl;
//     }
//     else{
//         cout<<"CONSONANT"<<endl;
//     }
    
//     return 0 ;
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<<"ENTER YOUR MARKS"<<endl;
//     cin>>marks;

//     if (marks>=90 && marks<=100)
//     {
//         cout<<"STUDENT GAINS GRADE A"<<endl;
//     }
//     else if (marks>=80 && marks<=89)
//     {
//         cout<<"STUDENT GAINS GRADE B"<<endl;
//     }
//     else if (marks>= 70 && marks<=79)
//     {
//         cout<<"STUDENT GAINS GRADE C AND BE READY WITH OIL"<<endl;
//     }
//     else if (marks>=60 && marks<=69)
//     {
//         cout<<"STUDENT GAINS GRADE D AND I WILL FUCK YOU"<<endl;
//     }
//     else if (marks< 60 )
//     {
//         cout<<"STUDENT FAIL AND GO TO HOME"<<endl;
//     }
//     else{
//         cout<<"WORNG ENTRY"<<endl;
//     }
    
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int units;
//     cout<<"ENTER YOUR UNITS"<<endl;
//     cin>>units;

//     if (units>=0 && units<=100)
//     {
//         cout<<"TOTAL ELECTRICITY BILL IS => "<<units*5<<endl;
//     }
//     else if (units>=101 && units<=200)
//     {
//         cout<<"TOTAL ELECTRICITY BILL IS => "<<units*7<<endl;
//     }
//     else if (units>200)
//     {
//         cout<<"TOTAL ELECTRICITY BILL IS => "<<units*10<<endl;
//     }
//     else{
//         cout<<"ERROR"<<endl;
//     }
    
    
//     return 0 ;
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int FirstNumber;
//     cout<<"ENTER THE FIRST NUMBER"<<endl;
//     cin>>FirstNumber;

//     int SecondNumber;
//     cout<<"ENTER THE SECOND NUMBER"<<endl;
//     cin>>SecondNumber;

//     char input;
//     cout<<"ENTER THE OPERATOR"<<endl;
//     cin>>input;

//     if (input == '+')
//     {
//         cout<<"THE CALCULATED VALUE IS => "<<FirstNumber+SecondNumber<<endl;
//     }
//     else if (input == '-')
//     {
//         cout<<"THE CALCULATED VALUE IS => "<<FirstNumber-SecondNumber<<endl;
//     }
//     else if (input == '*')
//     {
//         cout<<"THE CALCULATED VALUE IS => "<<FirstNumber*SecondNumber<<endl;
//     }
//     else if (input == '/')
//     {
//         if (SecondNumber != 0)
//         {
//         cout<<"THE CALCULATED VALUE IS => "<<FirstNumber/SecondNumber<<endl;
//         }
//         else
//         {
//             cout<<"CAN'T BE DIVIDE BY 0"<<endl;
//         }
        
//     }
//     else 
//     {
//         cout<<"ERROR"<<endl;
//     }

    
//     return 0 ;
// }




// # include <iostream>
// using namespace std;
// int main(){
//     int Num1;
//     cout<<"ENTER THE FIRST NUMBER"<<endl;
//     cin>>Num1;

//     int Num2;
//     cout<<"ENTER THE SECOND NUMBER"<<endl;
//     cin>>Num2;

//     int Num3;
//     cout<<"ENTER THE THIRD NUMBER"<<endl;
//     cin>>Num3;

//     if ((Num1>=Num2 && Num1<=Num3) || ( Num1<=Num2 && Num1>=Num3))
//     {
//         cout<<Num1<<endl;
//     }
//     else if( (Num2>=Num1 && Num2<=Num3) || (Num2 <= Num1 && Num2 >= Num3))
//     {
//         cout<<Num2<<endl;
//     }
//     else if ((Num3>=Num1 && Num3<=Num2) || (Num3 <= Num1 && Num3 >= Num1))
//     {
//         cout<<Num3<<endl;
//     }
//     else
//     {
//         cout<<"ERROR"<<endl;
//     }
    
//     return 0 ;
// }



// # include <iostream>
// # include <string>
// using namespace std;
// int main(){
//     string Choice1 , Choice2;
//     cout<<"ENTER YOUR ROCK , PAPER , SCISSOR"<<endl;
//     cin>>Choice1;

//     cout<<"ENTER YOUR ROCK , PAPER , SCISSOR"<<endl;
//     cin>>Choice2;

//     if ((Choice1 == "PAPER" && Choice2 == "ROCK") || (Choice1 == "SCISSOR" && Choice2 == "PAPER") || (Choice1 == "ROCK" && Choice2 == "SCISSOR"))
//     {
//         cout<<"USER 1 WINS"<<endl;
//     }
//     else if ((Choice2 == "PAPER" && Choice1 == "ROCK") || (Choice2 == "SCISSOR" && Choice1 == "PAPER") || (Choice2 == "ROCK" && Choice1 == "SCISSOR"))
//     {
//         cout<<"USER 2 WINS"<<endl;
//     }
//     else if ((Choice2 == "PAPER" && Choice1 == "PAPER") || (Choice2 == "SCISSOR" && Choice1 == "SCISSOR") || (Choice2 == "ROCK" && Choice1 == "ROCK"))
//     {
//         cout<<"MATCH TIES"<<endl;
//     }
//     else
//     {
//         cout<<"ERROR"<<endl;
//     }
    
//     return 0 ;
// }


# include <iostream>
# include <string>
using namespace std;
int main(){
    string Name;
    float amount;
    float discount=0 , TotalBill;
    char membership;

    cout<<"ENTER YOUR NAME"<<endl;
    getline(cin,Name);

    cout<<"ENTER YOUR AMOUNT"<<endl;
    cin>>amount;

    cout<<"ARE YOU A REGULAR MEMBER OF OUR RESTURANT FOR YES(1) FOR NO(0)"<<endl;
    cin>>membership;
    cout<<membership<<endl;

    if (membership == 'Y' || membership == 'y')
    {
        if (amount > 5000)
        {
            discount = amount * 0.25;
        }
        else if (amount > 2000)
        {
            discount = amount * 0.15;
        }
        else{
            cout<<"NO DISCOUNT"<<endl;
        }
        
    }
    else if (membership == 'N' || membership == 'n')
    {
        if (amount > 5000)
        {
            discount = amount * 0.10;
        }
        else
        {
            cout<<"NO DISCOUNT"<<endl;
        }
        
    }
    else
    {
        cout<<"ERROR"<<endl;
        return 0;
    }
    
    TotalBill = amount-discount;
    cout<<"YOUR TOTAL BILL IS =>" << TotalBill <<endl;
    

    return 0 ;
}