#include <stdio.h>

int main() {
    char array[20][20] = {
                             "arman",
                             "tom",
                             "jerry",
                             "tom",
                             "bob sponge",
                             "pattrick",
                             "okhtapus",
                             "arman",
                             "poo",
                             "shrek",
                             "pattrick",
                             "pattrick",
                             "leonardo",
                             "rafael",
                             "donatello",
                             "mikel angelo",
                             "rafael",
                             "arman",
                             "arman",
                             "arman"
                         };
    int result[20] = {0};
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            char* tmp1 = array[i];
            char* tmp2 = array[j];
            if(strcmp(tmp1, tmp2) == 0){
                result[i]++;
            }
        }
        // printf("index %d: %d \n", i, result[i]);
    }
    
    return 0;
}