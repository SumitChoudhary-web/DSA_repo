#include<iostream>
using namespace std;
//Pass by value and for the passing by reference we will use &a and &b instead of a and b
/*void sum(int a,int b){
    a++;
    b++;
    cout<<a<<" "<<endl;
}
int main(){
int x=7;
int y=9;
sum(x,y);
cout<<x<<" "<<y;
return 0;
}
*/
//Default parameters
/*
void greet(string name="User"){
cout<<"Hello "<<name;
}
int main(){
    greet("Sumit");
}*/

//Function overloading ->In this we use same name function more than 1 times ,It takes input based on the datatype
 /*int multiply(int a,int b){
    return a*b;
}
double multiply(double a,double b){
    return a*b;
}
int main(){
    cout<<multiply(3.2,7.4);
    return 0;
}*/

//Recursion->Function call itself
long fact(long n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int main(){
    cout<<fact(3);
    return 0;
}