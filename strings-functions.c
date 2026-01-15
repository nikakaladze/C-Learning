#include <stdio.h>
#include <string.h>

int main(void){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu",strlen(alphabet)); // თუ გვინდა რომ გავიგოთ ჩვენი სტრინგის სიგრე ანუ length ვიყენებთ strlen ფუნქციას //
    printf("%zu",sizeof(alphabet)); // sizeof ოპერატორით გავიგებთ რამდენი ბაიტი უჭირავს მეხსიერებაში ჩვენს სტრინგის   //

    return 0;

}   