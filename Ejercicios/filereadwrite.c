#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Abre el archivo en modo read
    FILE *inFile = fopen("./test.txt", "r");
    // Abre el archivo a escribir en modo write
    FILE *outFile = fopen("./testwrite.txt", "w");
    // Confirma que el archivo no es un nulo
    if (inFile == NULL)
    {
        // Si es un nulo mostrar error y terminar con error
        perror("open file fails: ");
        return (EXIT_FAILURE);
    }

    // Creamos dos variables, buffer donde guardaremos
    // El contenido en string de cada linea
    char buffer[64];
    // Variable status que es un pointer que trae la siguiente linea
    // cuando esta es nula significa que se termino el archivo
    char *status = NULL;

    do
    {
        // Status apunta a una nueva linea, guarda el texto en buffer
        status = fgets(buffer, sizeof(buffer), inFile);
        if (status != NULL)
        {
            // Imprime el texto si el status es distinto a nulo
            printf("%s", buffer);
            // Escribe en el archivo destino linea por linea
            fputs(buffer, outFile);
        }
    } while (status != NULL);
    printf("\n");

    // IMPORTANTE cerrar el archivo al finalizar
    fclose(inFile);

    return (EXIT_SUCCESS);
}