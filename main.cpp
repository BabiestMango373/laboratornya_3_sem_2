//
//  main.cpp
//  lсвинуть массив влево к раз
//
//  Created by Andrey Scherbakov on 05.02.2024.
//

#include <iostream>
#include <stdlib.h>

using namespace std;
const int n=7;

int main(){
    int k = 3;
    int tmp = 0 ;
    int a[n];
    cout<<"Изначальный массив"<<endl;
    
    for(int i=0; i<n; i++){
        a[i] = rand() % 200-100;
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for(int i=0; i<k; i++){
        tmp=a[0];
        for(int j = 0; j<n-1; j++){
            a[j]=a[j+1];
            a[n-1]=tmp;
        }
    }
    cout<<"Выходной массив"<<endl;
    
    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}
