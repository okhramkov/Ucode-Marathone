double mx_pow(double n, unsigned int pow) {
    unsigned int i = 0;
    double p = 1;
    if(pow == 0) {
        return 1;
    }
    if(pow == 1) {
        return n;
    }
    
    while(i != pow) {
        p = p * n;
        i++;
    }
    return p;
}
