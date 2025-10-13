#include<stdio.h>
int main(){
    char ch;
    printf("input the character");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='e'||ch=='o'||ch=='i'||ch=='u'){
        printf("%c is a vowel ",ch);
    }else{
        printf("%cis a consonant");
    }
    return 0;
}