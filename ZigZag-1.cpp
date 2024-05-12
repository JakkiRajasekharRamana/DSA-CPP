/*
Write a C++ program to rearrange the elements of a given array of integers in a zig-zag
pattern.
Note: The format zig-zag array in form a < b > c < d > e < f.
Sample Input and Output
Input: 0 1 3 4 5 6 7 8 10
Output: 0 3 1 5 4 7 6 10 8
*/


#include <bits/stdc++.h>

using namespace std;

void zigzag(array<int,100>& a,int size){
    if(size%2==0){
        for(int i=0;i<size;i=i+2){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    else{
        for(int i=1;i<size;i=i+2){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}

int main(){
    int size,x;
    cout<<"Enter size";
    cin>> size;
    array<int,100> s;
    cout<< "Enter numbers" ;
    for(int i=0;i<size;i++){
        cin>> x;
        s[i]=x;
    }

    zigzag(s,size);

    for(int i=0;i<size;i++){
        cout<<" "<<s[i]<<" ";
        
    }

}