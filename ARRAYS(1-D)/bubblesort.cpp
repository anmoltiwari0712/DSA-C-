#include<iostream>
using namespace std;
int main(){
    int counter=0;
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    ///begind

    while(counter<n-1){
        for(int i=0;i<n-counter-1;i++){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            } 

        }
        counter++;
    }

    for(int i=0;i<n;i++){
        cout << array[i] << " ";
    }


}