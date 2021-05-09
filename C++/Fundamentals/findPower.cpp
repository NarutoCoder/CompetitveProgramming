#include<iostream>
using namespace std;

int main() {
	
    int num , power;
    cin>>num>>power;
    
    if(power == 0){
        num = 1;
        
    }
    
    int ans = 1;
    while(power--){
        
        ans = ans * num;
        
    }
    
    cout<<ans<<endl;
    
	
}
