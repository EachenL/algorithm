//
// Created by markning on 4/13/18.
//

#include "TreeOutSchool.h"

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void TOS(){
    int m, n, l, k;
    int a[10001];
    while (cin>>m>>n){
        memset(a, 0, sizeof(a));
        while(n--){
            cin>>l>>k;
            for(int i = 1; i <= k; i++){
                a[i] = 1;
            }
        }
        int count = 0;
        for(int j = 0; j <= m; j++){
            if(a[j] == 0)
                count++;
        }
        cout<<count;

    }
}