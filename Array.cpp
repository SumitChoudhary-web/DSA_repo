#include<iostream>
using namespace std;
//To find smallest and laregst
/*
int main(){
    int num[]={12,23,45,67,-23,-18};
    int size=6;
    int smallest= INT_FAST16_MAX;//for the smallest
    int largest=INT16_MIN;//for the largest
    for(int i=0;i<size;i++){
       smallest=min(num[i],smallest);
       largest=max(num[i],largest);
    }
    cout<<smallest<<endl;
    cout<<largest;
    return 0;
}//same code for the largest with small changes
*/ 

//Pass by reference
void changeArr(int arr[],int size){
    cout<<"in function\n";
    for(int i=0;i<size;i++){
        arr[i]=2*arr[i];
    }

}

int main(){
    int arr[]={1,2,3};
    changeArr(arr,3);
cout<<"in main\n";
for(int i=0;i<3;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;

}