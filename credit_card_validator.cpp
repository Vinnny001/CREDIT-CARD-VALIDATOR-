//          CREDIT CARD VALIDATOR
//This is a program to help you know if your credit number is valid or not.
//Use: 6011000990139424 to test for validity if you don't have a valid one.

#include <iostream>

using namespace std;

int sumEvenNunbers(string number);
int sumOddNunbers(string number);
int getDigit(int number);

int main(){
string cardNumber;
int totalSum;
cout<<"Enter your card number: ";

getline(cin, cardNumber);
totalSum=sumEvenNunbers(cardNumber) + sumOddNunbers(cardNumber);

if(totalSum%10==0){
    cout<<cardNumber<<" credit card is valid!";
}
else{
    cout<<cardNumber<<" credit card is not valid!";
}

}

int sumEvenNunbers(string number){
    int sum;
    for(int i=number.size()-2; i>=0; i-=2){
        sum +=getDigit((number[i] - '0')*2);
    }
    return sum;
}

int sumOddNunbers(string number){
    int sum;
    for(int i=number.size()-1; i>=0; i-=2){
        sum +=number[i] - '0';
    }
    return sum;
}

int getDigit(int numberReturned){
    return numberReturned % 10 + (numberReturned/10%10);
}
