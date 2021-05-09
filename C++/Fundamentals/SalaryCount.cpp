#include<iostream>
#include<cmath>
using namespace std;

int main() {
	
  double basic_Salary;
    char allow;
    cin>>basic_Salary>>allow;
    
    int grade;
   if(allow == 'A'){
       grade = 1700;
   }else if(allow == 'B'){
       grade = 1500;
   }else{
       grade = 1300;
   }
        
    
    double hra =  basic_Salary * 0.2;
    double da = basic_Salary * 0.5;
	double pf = basic_Salary * 0.11;
    
    double total_Salary = hra + basic_Salary + da + grade - pf;
    int  ans = round(total_Salary);
    
    cout<<ans<<endl;
    
    
    
    
}
