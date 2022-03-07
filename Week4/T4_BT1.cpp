int maxThree(int a, int b, int c) {
    if (a > b) {
        if (a > c) return a;
    } 
    else if (b > c) return b;
    return c;
}