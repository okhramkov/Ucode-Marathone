#include"get_address.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *hex = NULL;
    int temp = 0;
    int lengt = 0;

    if(nbr == 0)
        return 0;
    for(temp = nbr; temp !=0; lengt++)
        temp /= 16;//шукаємо нову довжину числа відповідно до різниці розрядності
    hex = mx_strnew(lengt);//присвоюємо память
    lengt--;                //переводимо довжину в індекс останнього значення
    while(nbr != 0) {
        temp = nbr % 16;    //поцифрово конвертуємо значення
        if(temp < 10)
            hex[lengt--] = temp + 48;//для цифр просто переносимо
                                     //цифри по аскі значенням і зменшуємо індекс
        else
            hex[lengt--] = temp + 87;//аналогічно переносимо для букв
        nbr /= 16;                  //переходимо до наступної цифри
    }
    return hex;
}
