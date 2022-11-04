
#include <stdio.h>
#include <espl_lib.c>
#include <espl_lib.h>
int main() {
    int n;
    char answer, y;
    do {
    printf("please, enter a Number! \n");
    scanf("%d", &n);
    printf("%s\n", num_to_words( n));
    printf("Do you want to use it again ? (y/n)\n");
    scanf("%s",&answer);
    }
    while (answer=='y');
    return 0;
}