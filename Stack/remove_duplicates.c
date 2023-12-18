char* removeDuplicateLetters(char* s) {
    int arr[26];
    int visited[26] = {0};
    int n = strlen(s);
    char* ans = (char*)malloc(27 * sizeof(char)); 
    memset(ans, '\0', 27);

    for (int i = 0; i < n; i++) {
        int index = s[i] - 'a';
        arr[index] = i;
    }

    int p = 1;
    ans[0] = s[0];
    visited[s[0] - 'a'] = 1;
    for (int i = 1; i < n; i++) {
        if(visited[s[i] - 'a']) continue;
        if(s[i] < ans[p-1]){
            while(p>0  && s[i] <= ans[p-1] && arr[ans[p-1] - 'a'] >= i){
                visited[ans[p-1] - 'a'] = 0; 
                p--;
            }

        }
        ans[p] = s[i];
        visited[s[i] - 'a'] = 1;
        p++;
    }

    return ans;
}   