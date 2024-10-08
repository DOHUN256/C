#include <stdio.h>

int main(){
for(int i=0;i<6;i++){
    switch(i) {
        case(1):
            printf("     *");
            break;
        case(2):
            printf("    ***");
            break;
        case(3):
            printf("   *****");
            break;
        case(4):
            printf("  *******");
            break;
        case(5):
            printf(" *********");
            break;
    }
    printf("\n");
}
}