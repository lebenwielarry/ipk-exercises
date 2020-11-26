#include <cmath>
#include <iostream>


int main(){
     double a;
     double b;
     double c;
     

     std::cout << "a = geben sie a an " << std::endl;

     std::cin >> a;
     
     std::cout << "b = geben sie b an" << std::endl;
     
     std::cin >> b;
     
     std::cout << "c = geben sie c an" << std::endl;
     
     std::cin >> c;
     
     //Berechnung
     double wurzel = std::sqrt((b*b)-4*a*c);
     double addition = -b + wurzel;
     double subtraktion = -b - wurzel;
     addition = addition/2*a;
     subtraktion = subtraktion/2*a;
     
     //Fehlermeldung
     if(wurzel < 0){
     std::cout << "Fehler" << std:: endl;
     }
     else if(wurzel ==0){
     std::cout << "eine Nullstelle" << std:: endl;
     } else {
     
     //Ausgabe
     std::cout << "x1= "<< addition << std::endl;
     std::cout << "x2= "<< subtraktion << std::endl;
     }
}
