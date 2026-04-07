#include<iostream>
using namespace std;

int revArray(int arr[],int sz){
    int start=0; int end=sz-1;
    while(start>end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}

int main()
{
int arr[]={2,3,4,5,12,34,8,9};
int sz=8;
revArray(arr,sz);
for(int i=0;i<sz;i++){
    cout<<arr[i]<<" ";
}

return 0;
}