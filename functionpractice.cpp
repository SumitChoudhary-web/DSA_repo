#include<iostream>
using namespace std;
//Write a function to check prime
/*void Isprime(int n){
    if(n<=2){
        cout<<"It is not a prime number";
    }
    for(int i=2;i<n;i++){
        if (n%i==0){
            cout<<"It is a not prime number"<<endl;
            return ;
        }
        else 
        cout<<"prime number"<<endl;
    return ;
    }
    
}
int main(){
   int n;
   cin>>n;
    Isprime(n);

}
    */
//Write a function to reverse number
/*
int revnum(int n){
    int rev=0;
    while( n!=0){
        int digit =n%10;
       rev= rev*10+digit;
       
        n=n/10;
        
    }
    cout<<rev;
}
int main(){
    int n;
    cin>>n;
    revnum(n);
    
}*/

//Write function to find GCD

int gcd(int a,int b){
    int n;
    if(a>b){
        n=b;
    }
    else{
    n=a;
    }
     for(int i=n;i>=1;i--){
        if(a%i==0 && b%i==0){
        return i;
       }
    
      
        } 
         return 0;
        
    }

int main(){
    int a,b;
    

    cin>>a>>b;
   cout<< gcd(a,b);

}