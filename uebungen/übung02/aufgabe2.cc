#include <iostream>
#include <cmath>


//Funktion
void collatz(int number){
while(number!= 1 ||number!=0 || number!=-1 || number!=-5 ||number!=-17){


if(number % 2 ==0){
number = number/2;
} else {
number = (number*3) +1;
}
std::cout << number << std::endl;
}
}

// Main Funktion
int main( ){
int number;
std::cout << "Bitte geben Sie eine Nummer an" << std::endl;
std::cin >> number;
collatz(number);
std::cout << number << std::endl;
}


