//
// Created by markning on 4/12/18.
//
#include<iostream>
using namespace std;
int CAR(){
    int nCases, nFeets;
    while((cin>>nCases)){
        for(int i = 0;i <nCases; i++){
            cin>>nFeets;
            if(nFeets%4 == 0)
                cout<<nFeets/4<<nFeets/2<<endl;
            else if(nFeets%2 == 0)
                cout<<nFeets/4 + 1<<nFeets/2;
            else
                cout<<00;
        }
    }
}
