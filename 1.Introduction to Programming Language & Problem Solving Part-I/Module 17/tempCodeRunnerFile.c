if (arr[i] == '\0')
        return 0;
    int l = fun(arr, i + 1);
    return l + 1;