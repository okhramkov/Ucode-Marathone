int mx_mid(int a, int b, int c) {
    if(a >= c && a <= b) {
        return a;
    }
    else if(a >= b && a <= c) {
        return a;
    }
    else if(b >= a && b <= c) {
        return b;
    }
    else if(b >= c && b <= a) {
        return b;
    }
    else if(c >= a && c <= b) {
        return c;
    }
    else {
        return c;
    }
}
