void stack(char* arr, int* index, char c) {
    printf("%d", *index);
    if (*index == 0) {
        arr[(*index)++] = c;
    } else if (arr[(*index) - 1] == '(' && c == ')') {
        (*index)--;
    } else if (arr[(*index) - 1] == '[' && c == ']') {
        (*index)--;
    } else if (arr[(*index) - 1] == '{' && c == '}') {
        (*index)--;
    } else {
        arr[(*index)++] = c;
    }
}

bool isValid(char* s) {
    int n = strlen(s);
    char arr[n];
    int index = 0;

    for (int i = 0; i < n; i++) {
        stack(&arr, &index, s[i]);
    }

    return index == 0;
}