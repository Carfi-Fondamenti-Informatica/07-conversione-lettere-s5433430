#include "lib.h"

bool conversione(char &a) {

    if ((a >= 0) && (a <= 9)) {
        return false;
    } else
    {
        if(a >= 'A' && a <= 'Z'){
            a= a + 32;
            return true;
        }
        else if((a >='a')&&(c<='z')){
            a = a-32;
            return true;
        }
    } 
}
