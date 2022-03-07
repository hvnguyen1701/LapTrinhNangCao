void swap(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

void sortAscending(float array[], int size) {
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (array[i] > array[j]) swap(array[i], array[j]);
}

void reverseArray(float array[], int size) {
    for (int i = 0; i < size/2; i++) swap(array[i], array[size - i - 1]);
}

void sort(float array[], int size, bool isAscending) {
    sortAscending(array, size);
    if (!isAscending) reverseArray(array, size);
}