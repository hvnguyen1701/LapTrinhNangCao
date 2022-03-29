int *merge(int *firstArr, int lenArr1, int *secondArr, int lenArr2) {
    bool isAscending = false;
    if (lenArr1 > 1 && firstArr[0] < firstArr[1]) isAscending = true;
    if (lenArr2 > 1 && secondArr[0] < secondArr[1]) isAscending = true;

    int *mergeArr = new int[lenArr1 + lenArr2];
    int firstIndex = 0, secondIndex = 0, mergeIndex = 0;

    while (firstIndex < lenArr1 && secondIndex < lenArr2) {
        if (firstArr[firstIndex] < secondArr[secondIndex]) {
            if (isAscending) mergeArr[mergeIndex] = firstArr[firstIndex++];
            else mergeArr[mergeIndex] = secondArr[secondIndex++];
        }
        else {
            if (isAscending) mergeArr[mergeIndex] = secondArr[secondIndex++];
            else mergeArr[mergeIndex] = firstArr[firstIndex++];
        }
        mergeIndex++;
    }

    while (firstIndex < lenArr1) mergeArr[mergeIndex++] = firstArr[firstIndex++];
    while (secondIndex < lenArr2) mergeArr[mergeIndex++] = secondArr[secondIndex++];

    return mergeArr;
}