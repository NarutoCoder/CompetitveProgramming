using namespace std;

int nthFibonaci(int n ){
    
   int a = 0;
   int b = 1;
int value;    
    for(int i=0;i<n;i++){
         
        value = a + b;
        a = b;
        b = value;

        
        
    }
    
    return a;
    
    
}



int main(){
    int n ;
    cin>>n;
    int ans = nthFibonaci(n);
    cout<<ans<<endl;
  
    
    
    
}
