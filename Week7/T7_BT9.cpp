void reverse(char *s) {
    size_t n = strlen(s);
    for (size_t i = 0; i < n/2; i++) {
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
}