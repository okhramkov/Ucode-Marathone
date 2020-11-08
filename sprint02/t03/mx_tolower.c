int mx_tolower(int c){
    if(c>64 && c<91) {
        return c + 32;
    }
    else if(c>96 && c<123) {
        return c;
    }
    else {
        return 0;
    }
    
}
