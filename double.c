#include <stdio.h>

int main() {
    double numeropreciso = 3.141592653589793;
    double numeromuitopreciso = 3.141592653589793238463;
    
    printf("numero preciso (double): %15f\n", numeropreciso);
    printf("numero muito preciso (long douuble): %.21lf\n", numeromuitopreciso);

    return 0;


}