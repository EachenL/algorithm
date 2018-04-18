//
// Created by markning on 4/18/18.
//

#include "JosephProblem.h"
#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;
int flag[305];
void init() {
    for (int index = 0; index < 305; index++) {
        flag[index] = 0;

    }
}
void JP() {
    int n, m;
    cin >> n;
    cin >> m;
    while (n != 0 && m != 0) {
        int index = -1;
        int count = 0;
        init();
        for (int i = 1; i < n; i++) {
            count = 0;
            while (count != m) {
                index = (index + 1) % n;
                if (flag[index] = 0) {
                    count++;
                    if (count == m) {
                        flag[index] = 1;
                    }
                }
            }
        }
        for (int j = 0; j < n; j++) {
            if (flag[j] == 0) {
                cout << j + 1;
                break;
            }
        }
        cin >> n;
        cin >> m;
    }
}