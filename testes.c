
int bloco(){


printf("                             _________________________________");
for(int i =0;i<=15;i++){
    printf("\n                            |                                 |");
}
printf(" \n                             ----------------------------------");





printf("\n\n\n");
system("pause");

}

int menu(){
    char nome[50];
    printf("Informe seu nome\n");
    scanf("%s",&nome);
    printf("O nome informado e %s", nome);
    printf("\n\n");
    bloco();
}
//**********************************************************************************

int main(){


  menu();


}
