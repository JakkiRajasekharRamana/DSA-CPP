/*
Write a C++ program to rearrange a given sorted array of positive integers.
Note: In final array, first element should be maximum value, second minimum value,
third second maximum value, fourth second minimum value, fifth third maximum and
so on.
Sample Input and Output
Input: 0 1 3 4 5 6 7 8 10
Output: 10 0 8 1 7 3 6 4 5
*/

#include <bits/stdc++.h>
using namespace std;

void rearrange(array<int,100>& a,int size){

    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    array<int,100> n;
    n=a;
    for(int i=0;i<size/2;i++){
        swap(n[i],n[size-i-1]);
    }
    
    for(int i=0;i<size;i++){
        cout<<n[i]<<" ";
    }
    
    array<int,100> final;
    int j=0;
    for(int i=0;i<size;i++){
        if(i%2==1){
            final[i]=a[--j];
            j++;
        }
        else{
            final[i]=n[j];
            j++;
        }
    }
    cout<<"\n";
    for(int i=0;i<size;i++){
        cout<<final[i]<<" ";
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

    rearrange(s,size);
    cout<<"\n";
    /*
    for(int i=0;i<size;i++){
        cout<<s[i]<<" ";
    }
    */
    
}