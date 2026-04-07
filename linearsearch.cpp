#include<iostream>
using namespace std;

int search(int arr[],int target,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={4,5,7,9,8,1};
    int size=6;
    int target;
    cin>>target;
   int result= search(arr,target,size);
   cout<<result;
   return 0;

}