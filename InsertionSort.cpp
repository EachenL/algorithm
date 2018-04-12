//
// Created by markning on 4/10/18.
//
void InsertionSort(int a[], int size) {
    for (int i = 1; i < size; i++) {//循环size-1次,每循环一次i+1
        for (int j = 0; j < i; j++)//循环i次,外层循环i越大循环次数越多
            if(a[j] > a[i]) {//比较外层循环选定的数
                int tmp = a[i];
                for (int k = i; k > j; k--)
                    a[k] = a[k-1];//把a[i]放到位置j,原下标j到i-1的元素都往后移一位
                a[j] = tmp;
                break;
            }

    }
}
