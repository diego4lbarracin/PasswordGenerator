#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

char letra_numeros(int numero);
void gen_contra_aleatoria(int tama);
void random_message(int num);
void gen_pass_case2(int tama);

void show_message();

int tama=0, i=0,k=0, estandr= 8;

struct full_name
{
    char nombre1[60];
}nom_completo[4];

struct datos_contras
{
    char data[10];
}word_pass[2];

int main(){
    
    int option=0, a=0;
    printf("********************************************************\n");
    printf("Bienvenido al generador de contrasenas seguras\n");
    printf("Antes de empezar, por favor ingrese los siguientes datos\n");
    for ( i = 0; i < 4; i++)
    {
        if(i<2){
            a= i+1;
            printf("Deme su nombre %d: ", a);
            gets(nom_completo[i].nombre1);
        }else{
            a=i-1;
            printf("Deme su apellido %d: ", a);
            gets(nom_completo[i].nombre1);
        }
        strlwr(nom_completo[i].nombre1);
    }
    do
    {
        printf("********************************************************\n");
        printf("MENU PRINCIPAL\n");
        printf("Escoja una opcion\n");
        printf("1. Crear contrasena aletatoria y con la longitud solicitada.\n");
        printf("2. Crear contrasena con base a 2 datos que el usuario quiera.\n");
        printf("3. Generar contrasena aleatoria con una longitud estandar.\n");
        printf("4. Salir.\n");
        scanf("%d", &option);
        switch(option){
            case 1:
                printf("********************************************************\n");
                printf("Deme la longitud de la quiere su contrasena: ");
                scanf("%d", &tama);
                printf("Su contrasena es: ");
                gen_contra_aleatoria(tama);
                show_message();
                printf("********************************************************\n");
                break;
            case 2:
                printf("********************************************************\n");
                printf("Deme la longitud de la quiere su contrasena(min 10): ");
                scanf("%d", &tama);
                gen_pass_case2(tama);
                show_message();
                printf("********************************************************\n");
                break;
            case 3:
                printf("********************************************************\n");
                printf("Su contrasena es: ");
                gen_contra_aleatoria(estandr);
                show_message();
                printf("********************************************************\n");
                break;
            case 4:
                printf("********************************************************\n");
                if(option==4)
                {
                printf("Ha salido\n");
                }
                printf("********************************************************\n");
                break;
            default:
                printf("********************************************************\n");
                if(option>4 || option<=0)
                {
                    printf("Opcion Invalida\n");
                }
                printf("********************************************************\n");
        }
    }while(option!=4);
}
char letra_numeros(int numero){
    char x;
    switch(numero){
        case 0: x = 'A';
            break;
        case 1: x = '1';
            break;
        case 2: x = 'B';
            break;
        case 3: x = '2';
            break;
        case 4: x = 'C';
            break;
        case 5: x = '3';
            break;
        case 6: x = 'D';
            break;
        case 7: x = '4';
            break;
        case 8: x = 'E';
            break;
        case 9: x = '5';
            break;
        case 10: x = 'F';
            break;
        case 11: x = '6';   
            break;
        case 12: x = 'G';
            break;
        case 13: x = '7';
            break;
        case 14: x = 'H';
            break;
        case 15: x = '8';
            break;
        case 16: x = 'I';
            break;
        case 17: x = '9';
            break;
        case 18: x = '0';
            break;
        case 19: x = 'J';
            break;
        case 20: x = '%';
            break;
        case 21: x = 'K';
            break;
        case 22: x = '!';
            break;
        case 23: x = 'L';
            break;
        case 24: x = '$';
            break;
        case 25: x = 'M';
            break;
        case 26: x = '/';
            break;
        case 27: x = 'N';
            break;
        case 28: x = '_';
            break;
        case 29: x = 'O';
            break;
        case 30: x = '#';
            break;
        case 31: x = 'P';
            break;
        case 32: x = '?';
            break;
        case 33: x = 'Q';
            break;
        case 34: x = '&';
            break;
        case 35: x = 'R';
            break;
        case 36: x = '*';
            break;
        case 37: x = 'S';
            break;
        case 38: x = ')';
            break;
        case 39: x = 'T';
            break;
        case 40: x = '=';
            break;
        case 41: x = 'U';
            break;
        case 42: x = '!';
            break;
        case 43: x = 'V';
            break;
        case 44: x = '-';
            break;
        case 45: x = 'W';
            break;
        case 46: x = '@';
            break;
        case 47: x = 'X';
            break;
        case 48: x = '+';
            break;
        case 49: x = 'Y';
            break;
        case 50: x = ',';
            break;
        case 51: x = 'a';
            break;
        case 52: x = 'b';
            break;
        case 53: x = 'c';
            break;
        case 54: x = 'd';
            break;
        case 55: x = 'f';
            break;
        case 56: x = 'e';
            break;
        case 57: x = 'g';
            break;
        case 58: x = 'h';
            break;
        case 59: x = 'i';
            break;
        case 60: 
            x = 'j';
            break;
        case 61: 
            x = 'k';
            break;
        case 62: 
            x= 'l'; 
            break;
        case 63:
            x= 'm';
            break;
        case 64:
            x= 'n';
            break;
        case 65:
            x= 'o';
            break;
        case 66:
            x= 'p';
            break;
        case 67:
            x= 'q';
            break;
    }
    return x;
}
void gen_contra_aleatoria(int tama){
    char contrasena[tama];
    int acu= tama-1;
    for ( i = 0; i < tama; i++)
    {
        contrasena[i]= letra_numeros((rand()%68));
        printf("%c",contrasena[i]);
        if (i==acu)
        {
            printf("\n");
        }
    }
}
void gen_pass_case2(int tama){
    int j=0, k=0;
    char passworddd[tama];
    for ( i = 0; i < 2; i++)
    {
        if (i<1)
        {
            printf("Ingrese el dato %d: ",i);
            gets(word_pass[i].data);
            gets(word_pass[i].data);
            strlwr(word_pass[i].data);
        }else{
            printf("Ingrese el dato %d: ",i);
            gets(word_pass[i].data);
            strlwr(word_pass[i].data);
        }
        for ( j = 0; j < 4; j++)
        {
            if (strcmp((word_pass[i].data),(nom_completo[j].nombre1))==0)
            {
                while (strcmp((word_pass[i].data),(nom_completo[j].nombre1))==0)
                {
                    printf("El dato ingresado es igual a alguna parte de su nombre\n");
                    printf("Ingrese nuevamente el dato %d: ",i);
                    gets(word_pass[i].data);
                    strlwr(word_pass[i].data);
                    j=0;
                }
            }
        }
    }
    
    for ( i = 0; i < 4; i++)
    {
    
        passworddd[i]= word_pass[0].data[i];
    
    }
    passworddd[4]= '_';

    for (i=5; i < 10; i++)
    {

        passworddd[i]= word_pass[1].data[k];
        k= k+1;
    }
    for ( i = 0; i < 10; i++)
    {
        if (passworddd[i]=='i')
        {
            passworddd[i]= '1';
        }else if (passworddd[i]=='a')
        {
            passworddd[i]='4';
        }else if (passworddd[i]=='e')
        {
            passworddd[i]= '3';
        }else{
            continue;
        }
    }
    if (tama>10)
    {
        for ( i = 10; i < tama; i++)
        {
            passworddd[i]=  letra_numeros((rand()%68));
        }
    }
    printf("Su contrasena es: ");
    for ( i = 0; i < tama; i++)
    {
        printf("%c", passworddd[i]);
    }
    printf("\n");
}
void random_message(int num){
    switch (num)
    {
        case 0:
            printf("NOTA: Recuerde cambiar su contrasenia con frecuencia\n");
            break;
        case 1:
            printf("NOTA: No use informacion personal en su contrasenas\n");
            break;
        case 2:
            printf("NOTA: Sea precavido con lo que comparte en redes sociales\n");
            break;
        case 3:
            printf("NOTA: No ingrese sus credenciales en un sitio web sin antes revisar el URL (https)\n");
            break;
        case 4:
            printf("NOTA: Mantega el software de sus dispositivos actualizado en la ultima version\n");
            break;
        case 5:
            printf("NOTA: Evite a toda costa descargar software no oficial (pirata)\n");
            break;
        case 6:
            printf("NOTA: Realice copias de seguridad de su informacion inportante con frecuencia\n");
            break;
    }
}
void show_message(){
    random_message((rand()%7));
}