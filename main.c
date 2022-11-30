#include <stdio.h>
int read_vector(int tab[],int size,int stop_value){
    int counter;
    if(size<1) return -1;
    for(int i=0;i<size;i++){
        if(!scanf("%i",&tab[i])){
            printf("Incorrect input");
            return -2;
        }
        if(tab[i]==stop_value) break;
        counter=i;
    }
    if(counter+1<1){
        printf("Not enough data available");
        return 2;
    }
    return counter+1;
}
int display_vector(const int vec[],int size){

}
int main() {
    int v1[50],v2[50];
    printf("Podaj pierwszy wektor:");
    read_vector(v1,50,0);
    printf("Podaj drugi wektor:");
    read_vector(v2,50,0);

    printf("%i",v1[3]);
    return 0;
}
