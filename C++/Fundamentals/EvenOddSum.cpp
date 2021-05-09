#include<iostream>
using namespace std;

int main() {
	
    int n;
    cin>>n;
    int even_Sum = 0 , odd_Sum = 0;
    while(n != 0){
        
        int digit = n % 10;
        if(digit % 2 == 0){
            
            even_Sum += digit;
        }else{
            odd_Sum += digit;
        }
        
        n = n / 10;
        
    }
    
    cout<<even_Sum<<" "<<odd_Sum;
    
    
    
    
}
