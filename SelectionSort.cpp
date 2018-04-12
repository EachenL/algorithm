//
// Created by markning on 4/8/18.
//
void SelectionSort (int a[], int size) {
    for (int i = 0; i < size - 1; i++) {//此语句共执行size-1次
        int tmpMin = i;//tmpMin作为i与j比较过程中的指针，在比较之后指向小的数
        for (int j = i + 1; j < size; j++){//j永远比i大1
            if (a[j] < a[tmpMin])
                tmpMin = j;
        }

    int tmp = a[i];//将本次循环中两数的最小值移到左边
    a[i] = a[tmpMin];//
    a[tmpMin] = tmp;//
    }
}
