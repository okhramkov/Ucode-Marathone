// #include<stdio.h>

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

// int main () {
// double a = mx_pow(2.5, 3);
// printf("%f", a);
// }





//     if (pow == 0) 
//         return 1; 
//     else if (pow%2 == 0) 
//         return mx_pow(n, pow/2) * mx_pow(n, pow/2); 
//     else
//         return n * mx_pow(n, pow/2) * mx_pow(n, pow/2); 
// } 

// int main() 
// { 
//     double n = 2; 
//     unsigned int pow = 3; 
  
//     printf("%f", mx_pow(n, pow)); 
//     return 0; 
// } 
