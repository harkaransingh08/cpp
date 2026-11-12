# include <iostream>
using namespace std;

int decToBinary(int decNum){
    int binaryNum = 0;
    int rem;
    while (decNum>0)
    {
        rem = decNum%2;
        binaryNum = binaryNum*10 + rem;
        decNum /= 2;
    }
    return binaryNum;
}

int main(){
    int decNum = 50;
    return 0 ;
}