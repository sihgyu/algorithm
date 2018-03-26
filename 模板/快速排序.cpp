void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
// 快速排序模板

void quickSort(int *arr, int left, int right) {

    if (left >= right)
        return;



    int i = left, j = right;
    int standard = arr[left];

    while (i < j) {

        //find some elements bigger than standard
        while (i < j && arr[i] < standard)
            ++i;

        //find some elements smaller than standard
        while (i<j && arr[j] > standard)
            --j;

        //exchange arr.i and arr.j
        swap(arr[i], arr[j]);
    }
    // i == j where the standard should be

    quickSort(arr, left, i - 1);
    quickSort(arr, i + 1, right);
}
