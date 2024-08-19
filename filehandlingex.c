#include<stdio.h>
int main(){
    FILE *ftpr;
    ftpr=fopen("file.txt","w");

    if(ftpr==NULL){
    printf("error in opening file!\n");
    return 1;

    }
    fprintf(ftpr,"my name is virender!S\n");
    fclose(ftpr);

    printf("file created and data written successfully.\n ");
    return 0;
}
