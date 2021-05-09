#include<iostream>
using namespace std;


int main(){
    int s , e , w;
    cin>>s>>e>>w;
    
    while(s <= e){
        
        int ans = (((s - 32)*5)/9);
        cout<<s<<" "<<ans<<endl;
        
        s = s + w;
    }
    
}
