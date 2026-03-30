#include<iostream>
using namespace std;

//for printing
/*
A
AB
ABC
*/
/* int main(){
    int n;
    cout<<"Enter the value of n =";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(char j=65;j<=65+i;j++){
            cout<<j;
        }
          cout<<endl;
    }
}
    */

//for printing 
/*A
  BC
  DEF
*/

/*
int main(){
    int n;
    char ch='A';
    cout<<"Enter the value of the n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

}*/
//for printing 
/*A
BB
CCC
DDDD
EEEEE
*/

int main(){
    int n;
    char ch='A';
    cout<<"Enter the value of the n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<ch;
        } 
        ch++;
        cout<<endl;
    }
}
