void descendingSortArray(int len, int* arr) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++) {  // Iterate over all elements
        for (j = i + 1; j < len; j++) {  // Compare with remaining elements
            if (arr[i] < arr[j]) {  // Swap if the current element is smaller
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
