#include <iostream>
#include <cmath>

int f1 = 0;
int f2 = 1;
int n;
int fn;


void fibunacci(int fibunacci){
	
if(fibunacci==2){
	std::cout<< "0","1";
}else if(fibunacci==1){
	std::cout << "0";
	}
	else
	
	{
	std::cout<<0<<" " <<std::flush;
	std::cout<<1<<" " <<std::flush;
for(int i=3;i<=fibunacci;++i)   
 {    
  n=f1+f2;    
  std::cout<<n<<" "; 
     
  f1=f2;    
  f2=n;
  fn=n;    
 }    
}

}

int main (){
	int n;
	std::cout << "Bitte zahl eingeben" << std::endl;
    std::cin >> n;
	fibunacci(n);

}
