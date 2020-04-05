/* Algoritmo: Conversión pesos MXN a dólares USD c/ comisiones.
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
int main(){
    //Variables
    const float COMISION_MENOR = 0.005, COMISION_MAYOR = 0.01;
    float tasa, pesos, dolares;
    
    //Ingreso de valores:
    printf("Por favor ingrese la tasa de cambio: ");
    scanf("\n%f", &tasa);
    printf("\nAhora, ingrese el monto a cambiar (en pesos MXN): $");
    scanf("\n%f", &pesos);
    
    //Proceso:
    if (pesos < 10000)
    {
       dolares = (pesos/tasa) * (1-COMISION_MAYOR);
       printf("\nLa comision aplicada fue de 0.1%%. \n");
    }
    if (pesos >= 10000)
    {
       dolares = (pesos/tasa) * (1-COMISION_MENOR);
       printf("\nLa comision aplicada fue de 0.05%%. \n");
    }
    printf("\nSu cambio es de $%.2f dolares USD.", dolares);
    
    //Fin + Prolongación de Ventana
    getch();
    return 0;
}
