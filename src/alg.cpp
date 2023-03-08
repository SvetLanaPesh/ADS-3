// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int l = 0, r = size - 1;
    int count = -1, count1 = 0;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == value) {
            count = m;
            r = m - 1;
        } else if (arr[m] > value)
            r = m - 1;
        else
            l = m + 1;
    }
    if (count == -1)
        return 0;
    int l1 = 0, r1 = size - 1;
    while (l1 <= r1) {
        int m = l1 + (r1 - l1) / 2;
        if (arr[m] == value) {
            count1 = m +1;
            l1 = m + 1;
        } else if (arr[m] > value)
            r1 = m - 1;
        else
            l1 = m + 1;
    }
    return count1 - count;
}
