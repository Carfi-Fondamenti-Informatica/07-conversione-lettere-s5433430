#include "lib.h"
bool conversione(char &c) {
    if ((c >= 0) && (c <= 9)) {
        return false;
    }
    else
    {
        if(c>= 'A' && c <= 'Z'){
            c= c + 32;
            return true;
        }
        else if((c>='a')&&(c<='z')){
            c=c-32;
            return true;
        }
    } 
}
