/* Algoritmo: Conversión de importe bruto a importe neto c/ descuentos.8
 * Alexander Díaz Ruiz
 * ID 160046
 * Sección 2
 */
int main(){
    //Variables
    float imp_b, desc, imp_n;
    
    //Ingreso de valores:
    printf("Ingrese el monto total de su compra: $");
    scanf("\n%f", &imp_b);
    
    //Calcular descuento debido:
    if (imp_b >= 20000)
    {
       desc = imp_b * 0.15;
       printf("\nFelicidades! Usted se lleva un 15%% de descuento en su compra. \n");
    }
    else
    {
       desc = 0;
       printf("\nLo lamentamos, el total de su compra no es suficiente para llevarse un descuento. Intente juntar un minimo de $20,000. \n");
    }
    imp_n = imp_b - desc;
    printf("\nEl total de su compra es de $%.2f.", imp_n);
    
    //Fin + Prolongación de Ventana
    getch();
    return 0;
}
