int mx_gcd(int a, int b) {
    if(a < 0)
        a *= -1;
    if(b < 0)
        b *= -1;
    if (a == 0 || b == 0)
        return 0;
    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a != b) {
        a = mx_gcd(a, b - a);
    }
    return a;
}
