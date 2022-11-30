#include <stdio.h>


int stlen(char const tab[]){
    int counter=0;
    for(int i=0;i<2002;i++){
        if(tab[i]!='\0')counter++;
        if(tab[i]=='\0') {
            break;
        }
    }
    return counter;
}
int count(const char tab[],char c){
    int size=stlen(tab);
    int sum=0;
    for(int i=0;i<size;i++){
        if(tab[i]==c) sum++;
    }
    return sum;
}
int count_string(const char tab[], const char tab2[]){
    int k=0,counter=0,sum=0;
    for(int i=0;i<=stlen(tab);i++){
        if(tab[i]==tab2[k]&&tab[i]!='\n'){
            counter++;
            k++;

        }
        else{
            k=0;

            if(counter==stlen(tab2)){

                sum++;
            }
            counter=0;
        }
    }
    return sum;
}
int count_all_of(const char tab[], const char tab2[]){
    int canceledcounter=0,exist=0,result=0;
    char canceled[1000]={0};
    for(int i=0;i<=stlen(tab2);i++){
        exist=0;
        for(int j=0;j<canceledcounter;j++){
            if(tab2[i]==canceled[j]){
                exist=1;
            }
        }
        if(exist==0){
            canceled[canceledcounter]=tab2[i];
        }
        canceledcounter++;
    }
    for(int i=0;i<canceledcounter;i++){
        for(int j=0;j<stlen(tab);j++){
            if(canceled[i]==tab[j]){
                result++;
            }
        }
    }
    return result;
}
int mains() {
    char tab[2001],wanted[1001];
    printf("Podaj tekst:");
    fgets(tab,2001,stdin);
    printf("Podaj drugi tekst:");
    fgets(wanted,1001,stdin);
    printf("\n%i", count(tab,wanted[0]));
    printf("\n%i", count_string(tab,wanted));
    printf("\n%i", count_all_of(tab,wanted));
    /*
    printf("Podaj drugi tekst:");
    fgets(wanted,1001,stdin);
    printf("%i", count(tab,wanted[0]));
    printf("\n%i", count_string(tab,wanted));
    printf("\n%i", count_all_of(tab,wanted));*/
    return 0;
}
