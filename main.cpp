#include <iostream>
#include <cmath>
#include <string>
#include <limits>

using namespace std;

//funcion de menu

void menu_(int &opc);

//funciones de sub-menus/calculos

void areas_(int &opc);
void volumenes_(int &opc);
void temperaturas_(int &opc);
void monedas_(int &opc);
void numericos_(int &opc);
void arreglos_matrices(int &opc);
void varios_(int &opc);

//funciones de manejo de codigo

void validar_entrada();
void opcion_invalida(int &opc, int opc_2);
void volver(int &opc, int opc_2);

//funciones adicionales de operaciones

void convertir_monedas(float cop, float tasa);
void llenar_arreglo(int (&arr)[], int n);
void llenar_matriz(int (&matriz)[3][3]);
void imprimir_matriz(int (&matriz)[3][3]);
void ordenar_burbuja(int (&arr)[], int n);
void fibonacci(int n);


//variable de control de ejecución

int opc=0;




int main(){
   menu_(opc);              
     return 0;    
}


void validar_entrada(){
    if (cin.fail()) {
        cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }
}



void menu_(int &opc){
     
     system("cls");
     system("color 3");
    
    
    if (opc != 0){
    goto salto;
    }

    //menu principal
    cout<<"\t\t\tMenu principal"
    "\n-----------------------------------------------------------------"
    "\n1. Areas"
    "\n2. Volumenes "
    "\n3. Temperaturas "
    "\n4. Monedas "
    "\n5. Conversor Sistemas numericos "
    "\n6. Arreglos y matrices "
    "\n7. Varios"
    "\n8. Salir"
    "\n-----------------------------------------------------------------"
    "\nIngrese una opcion: ";
    cin>>opc;
    validar_entrada();
           
            salto:

        system("cls");

        switch(opc){     
        case 1:         
        
                 
        cout<<"\t\t\tSub-menu areas"
      "\n-----------------------------------------------------------------"
        "\n1. Triangulo"
        "\n2. Circulo"
        "\n3. Rectangulo"
        "\n4. Cuadrado"
        "\n5. Regresar al menu principal"
       "\n-----------------------------------------------------------------"
        "\nIngrese una opcion: "; 
        cin>>opc;
        validar_entrada();
        areas_(opc);
        break;


        case 2:
        
        
        cout<<"\t\t\tSub-menu volumenes"
       "\n-----------------------------------------------------------------"
        "\n1. Esfera"
        "\n2. Paralelepipedo"
        "\n3. Cubo"
        "\n4. Regresar al menu principal"
       "\n-----------------------------------------------------------------"
        "\nIngrese una opcion: ";
        cin>>opc;
        validar_entrada();
        volumenes_(opc);
        break;
                
        case 3:
        

        cout<<"\t\t\tSub-menu temperaturas"
       "\n-----------------------------------------------------------------"
        "\n1. De Celsius a kelvin"
        "\n2. De Kelvin a Fahrenheit"
        "\n3. De Fahrenheit a Celsius"
        "\n4. Regresar al menu principal"
       "\n-----------------------------------------------------------------"
        "\nIngrese una opcion: ";
        cin>>opc;
        validar_entrada();
        temperaturas_(opc);
        break;
                
        case 4:
        

        cout<<"\t\t\tSub-menu divisas"
       "\n-----------------------------------------------------------------"
        "\n1. De Pesos a Dolares"
        "\n2. De Pesos a Euros"
        "\n3. De Dolares a Pesos"
        "\n4. De Euros a Pesos"
        "\n5. De Euros a Dolares"
        "\n6. De Dolares a Euros"
        "\n7. Regresar al menu principal"
       "\n-----------------------------------------------------------------"
        "\nIngrese una opcion: ";
        cin>>opc;
        validar_entrada();
        monedas_(opc);
        break;
                
        case 5:

        cout<<"\t\tSub-menu Sistemas Numericos"
       "\n-----------------------------------------------------------------"
        "\n1. Convertir de decimal a binario"
        "\n2. Convertir de decimal a octal"
        "\n3. Convertir de decimal a hexadecimal"
        "\n4. Convertir de binario a decimal"
        "\n5. Convertir de octal a decimal"
        "\n6. Convertir de hexadecimal a decimal"
        "\n7. Regresar al menu principal"
       "\n-----------------------------------------------------------------"
        "\nIngrese una opcion: ";
        cin>>opc;
        validar_entrada();
        numericos_(opc);
        break;
                
        case 6:
  

        cout<< "\t\tSub-menu arreglos y matrices"
       "\n-----------------------------------------------------------------"
        "\n1. Ordenamiento de un arreglo"
        "\n2. Buscar un valor en un arreglo"
        "\n3. Suma de matrices"
        "\n4. Multiplicacion de matrices"
        "\n5. Buscar un valor en una matriz"
        "\n6. Regresar al menu principal"
        "\n-----------------------------------------------------------------"
        "\nIngrese una opcion: ";
        cin>>opc;
        validar_entrada();
        arreglos_matrices(opc);
        break;
                
        case 7:
        

        cout<<"\t\t\tSub-menu Varios"
       "\n-----------------------------------------------------------------"
        "\n1. Distancia entre dos puntos"
        "\n2. Raices de una funcion cuadratica"
        "\n3. Factorial"
        "\n4. Fibonacci"
        "\n5. Primo"
        "\n6. Numeros amigos"
        "\n7. Regresar al menu principal"
        "\n-----------------------------------------------------------------"
        "\n Ingrese una opcion: ";
        cin>>opc;
        validar_entrada();
        varios_(opc);
        break;
                
        case 8:
        

        cout<<"\t\t\tPrograma finalizado"
       "\n-----------------------------------------------------------------";
        break;
                
        default: 
        
         opcion_invalida(opc, 0);
        
                
        }
}





//Areas








void areas_(int &opc)
{
    system("cls");

    if (opc >=1 && opc <=5)
    {
        if (opc==1) //area del triangulo
        {
            float base=0, altura=0;
                cout<<"\t\tArea de un triangulo"
                "\n-----------------------------------------------------------------\n";
                cout<<"ingrese el valor de la base:\n";
                cin>>base;
                cout<<"ingrese el valor de la altura:\n";
                cin>>altura;
                cout<< "\n-----------------------------------------------------------------";
                validar_entrada();
            if (base<=0 || altura<=0)
            {
               cout<<"\nLos valores son invalidos"<<endl;
                system("pause");
                areas_(opc); 
            }
            
            else 
            {
                
                cout<<"\nEl valor del area del triangulo es: "<<(base*altura)/2<<endl;
                system("pause");
        
                    volver(opc,1);
            }
        }

        else if (opc==2) //area del circulo
        {
            float radio;
                cout<<"\t\tArea de un circulo"
                "\n-----------------------------------------------------------------\n";
                cout<<"Ingrese el valor del radio : "<<endl;
                cin>>radio;
                validar_entrada();
                cout<<"\n-----------------------------------------------------------------\n";
            if (radio<=0)
            {
               cout<<"\nValor invalido"<<endl;              
                system("pause");                
                areas_(opc); 
            }
            
            else 
            {
                
                cout<<"\nEl valor del area del circulo es: "<<(M_PI*(pow(radio,2)))<<endl;
                system("pause");
        
                    volver(opc,1);
            }
        }

        else if (opc==3) //area del rectangulo
        {
            float base, altura;
                cout<<"\t\tArea de un rectangulo"
                "\n-----------------------------------------------------------------\n";
                cout<<"Ingrese el valor de la base: \n";
                cin>>base;
                cout<<"Ingrese el valor de la altura: \n";
                cin>>altura;
                validar_entrada();
                cout<<"\n-----------------------------------------------------------------\n";
            if (base<=0 || altura<=0)
            {
               cout<<"Los valores son invalidos"<<endl;
                system("pause");
                areas_(opc); 
            }
            
            else 
            {
                
                cout<<"El valor del area del rectangulo es: "<<(base*altura)<<endl;
                system("pause");
        
                    volver(opc,1);
            };
        }

        else if (opc==4) //area del cuadrado
        {
            float lado;
            cout<<"\t\tArea de un cuadrado"
            "\n-----------------------------------------------------------------\n";
                cout<<"Ingrese el valor de la base: ";
                cin>>lado;
                validar_entrada();
                cout<<"\n-----------------------------------------------------------------\n";
            if (lado<=0)
            {
               cout<<"Valor invalido"<<endl;
                system("pause");
                areas_(opc); 
            }
            
            else 
            {
                
                cout<<"El valor del area del cuadrado es: "<<(lado*lado)<<endl;
                system("pause");
        
                    volver(opc,1);
            };
        }

        else if (opc==5) //volver al menu principal
        {
            system("cls");
            volver (opc, 0);            
        }        
    } 
    
    else
    {
         opcion_invalida(opc, 1);
    } 








//Volumenes








}

void volumenes_(int &opc)
{
    system("cls");

    if(opc >= 1 && opc <= 4){

        if(opc==1){ //volumen esfera

            float radio = 0;
            cout<<"\t\tVolumen de una esfera"
            "\n-----------------------------------------------------------------\n"
             "Ingrese el valor del radio de la esfera:\n";
                cin>>radio;
                validar_entrada();
            cout<<"\n-----------------------------------------------------------------\n";
            if(radio<=0){
                cout<<"Valor invalido"<<endl;
                
                system("pause");
                
                volumenes_(opc);
            }
            else{
            
            radio = (4/3) * M_PI * (pow(radio, 3));
            cout<<"El volumen de la esfera es: "<<radio<<endl;
        
            system("pause");
        
            volver(opc,2);
            }
        }

        else if(opc ==2) //volumen paralelepipedo
        { 
           
            //ancho * longitud * altura

            float ancho = 0, longitud = 0, altura = 0;
            cout<<"\t\tVolumen Paralelepipedo"
            "\n-----------------------------------------------------------------\n";
                cout<<"Ingrese las medidas del paralelepipedo: "
                "\nAncho: ";
                cin>>ancho;
                cout<<"Altura: ";
                cin>>altura;
                cout<<"Longitud: ";
                cin>>longitud;
                validar_entrada();
                cout<<"\n-----------------------------------------------------------------\n";
            if(ancho<=0 || altura <= 0 || longitud <=0){
                cout<<"Valor invalido"<<endl;
                system("pause");
                opc = 2;
                volumenes_(opc);
            }
            
            cout<<"El volumen del paralelepipedo es: "<<ancho * longitud * altura<<endl;
            system("pause");
            opc=2;
            main();
        }

        else if(opc == 3)//cubo
        {
        
            // lado³
            float lado = 0;
            cout<<"\t\tVolumen de un cubo"
            "\n-----------------------------------------------------------------\n"
                  "Ingrese la medida del cubo especificada: "
            "\nLado: ";
            cin>>lado;

            if(lado<=0)
            {
                opc = 3;
                cout<<"Valor invalido"<<endl;
                system("pause");
                volumenes_(opc);
            }
            else
            {
                cout<<"El volumen del cubo con lado "<<lado<<" es: "<<pow(lado, 3)<<endl;
                system("pause");
                volver(opc,2);
                
            }
        }

        else if(opc == 4)
        {
            volver(opc,0);

        }

}
else{
    opcion_invalida(opc, 2);
}

}








//Temperaturas








void temperaturas_(int &opc){
system("cls");

    if (opc>=1 && opc<=4) //celcius a kelvin
    {
        if (opc==1)
        {
            float cel;
            cout<<"\t\tConversor de Celcius a Kelvin"
            "\n-----------------------------------------------------------------\n";

                cout<<"Ingrese el valor del Celcius : ";
                cin>>cel;

            cout<<"\n-----------------------------------------------------------------\n";

            cout<<"La temperatura de Celcius en grados kelvin es: "<<cel+273.15<<endl;
            system("pause");
            volver(opc, 3);   
        }

        else if (opc==2) //kelvin a fahrenheit
        {
            float kel;
            cout<<"\t\tConversor de Kelvin a Fahrenheit"
            "\n-----------------------------------------------------------------\n";

                cout<<"Ingrese el valor del Kelvin : ";
                cin>>kel;

            cout<<"\n-----------------------------------------------------------------\n";

            cout<<"La temperatura de Kelvin en grados Fahrenheit es: "<<((kel-273.16)*9/5)+32<<endl;
            system("pause");
                volver(opc, 3);;
        }
        
        else if (opc==3) //fahrenheit a celcius
        {
            float fa;
            cout<<"\t\tConversor de Fahrenheit a Celcius"
            "\n-----------------------------------------------------------------\n";

                cout<<"Ingrese el valor del Fahrenheit : ";
                cin>>fa;

            cout<<"\n-----------------------------------------------------------------\n";

            cout<<"La temperatura de Fahrenheit en grados Celcius es: "<<(fa-32)*5/9<<endl;
            system("pause");
                volver(opc, 3);;
        }
        
        else if(opc==4) //volver al menu pricipal
        {
            volver(opc,0);
        }

    }

    else
    {
        opcion_invalida (opc, 3);
    }
}








//Monedas








//funciones adicionales---------------------------------------------------------

void convertir_monedas(string m_1, string m_2){

     float tasa, valor;

        cout<<"\t\tConvertir divisas"
          "\n-----------------------------------------------------------------\n"
        "Escriba la tasa de cambio de "<<m_2<<" a "<<m_1<<":\n";
        cin >> tasa;
        cout<<"Ingrese el valor en "<<m_1<<":\n";
        cin>> valor;
        validar_entrada();

            if(tasa<=0 || valor <=0)
            {
                opcion_invalida(opc, 4);
            }
            else 
            {
                system("cls");
                cout<<
                "Valor en "<<m_2<<": "<<valor/tasa<<endl;
                system("pause");
                volver(opc, 4);
            }
}

//------------------------------------------------------------------------------

void monedas_(int &opc){

    string monedas[3]={"Peso (COP)", "Dolar (USD)", "Euro (EUR)" };

    if (opc>=1 && opc<=7) 
    {
        system("cls");

        if (opc == 1) //pesos a dolares
        {
           convertir_monedas(monedas[0], monedas[1]);
        }

        else if (opc == 2) //pesos a euros
        {
           convertir_monedas(monedas[0], monedas[2]);

        }

        else if (opc == 3) //dolares a pesos
        {
           convertir_monedas(monedas[1], monedas[0]);
        }

        else if (opc == 4) // euros a pesos
        {
            convertir_monedas(monedas[2], monedas[0]);
        }

        else if (opc == 5) //euros a dolares   
        {
            convertir_monedas(monedas[2], monedas[1]);
        }

        else if (opc == 6) //dolares a euros 
        {
            convertir_monedas(monedas[1], monedas[2]);
        }

        else if (opc == 7) //volver al menu pricipal
        {
        volver(opc, 0);
        }
    }

    else {
        opcion_invalida(opc, 4);
    }
}








//Sistemas Numericos








void numericos_(int &opc){

    if (opc>=1 && opc<=7)
    {
        system("cls");
        if (opc==1) //decimal a binario
        {
            long long dec=0;
            short res=0;
            string bin="";

            cout<<"\t\tConversor decimal a binario"
              "\n-----------------------------------------------------------------\n"
            "Escriba su numero decimal: ";
            cin>>dec;
            validar_entrada();
            while (dec!=1)
            {
                res= dec%2;
                bin= to_string(res) + bin;
                dec= dec - (dec%2);
                dec/= 2;
            }
            
            bin="1"+bin;

            cout<<"\n-----------------------------------------------------------------\n"
            "Su numero en binario es: "<<bin<<endl;
            system("pause");
            volver(opc, 5);
            
        }

        else if (opc==2) //decimal a octal
        {
            long long dec = 0;
            string octal ="";
            
            cout<<"\t\tConversor Decimal a Octal"
              "\n-----------------------------------------------------------------\n"
            "Ingrese su numero decimal: ";
            cin>>dec;
            validar_entrada();

            do{
                
                octal = to_string(dec%8) + octal;
                dec = dec - (dec%8);
                dec/=8;
                
            } while( dec >= 1);
            cout<<"\n-----------------------------------------------------------------\n"
            "Su numero en octal es:\n"<<octal;
            volver(opc, 5);
        }

        else if (opc==3) //decimal a hexadecimal
        {
            string hex = "";
            long long dec = 0;
            char digito;
            short r;
            
            cout<<"\t\tConversor Decimal a Hexadecimal"
              "\n-----------------------------------------------------------------\n"
            "Ingrese su numero decimal a convertir:\n";
            cin>>dec;
            validar_entrada();
            while(dec >= 1){
                r = dec %16;
                if( r < 10){
                    hex = to_string(r) + hex;
                }
                else{
                    digito = 'A' + (r-10);
                    hex = digito + hex;
                }
                
                
                dec /= 16;
            }
            cout<<"\n-----------------------------------------------------------------\n"
            "Su numero en hexadecimal es:\n"<<hex;
            volver(opc, 5);
        }

        else if (opc==4) //binario a decimal
        {
            string bin;
            long long decimal;

            cout<<"\t\tConversor Binario a Decimal"
              "\n-----------------------------------------------------------------\n"
            "Escriba el numero binario que desea convertir:\n";
            cin>>bin;
             validar_entrada();
              short  digitos = bin.length() - 1;
    
            for(short i = 0; i <= digitos; i++){
                if(bin[i] == '1'){
                    decimal = decimal + pow(2, digitos - i);
                }
            }

            cout<<"\n-----------------------------------------------------------------\n"
            "Su numero decimal es:\n"<<decimal;

            volver(opc, 5);
        }

        else if (opc==5) //octal a decimal
        {
            long long octal;

            cout<<"\t\tConversor Octal a Decimal"
              "\n-----------------------------------------------------------------\n"
            "Escriba el numero octal que desea convertir:\n";
            cin>>octal;
            validar_entrada();
            
             short i = 0, digitos = 0, digito = 0;
             long long decimal = 0;

    

            while (octal/pow(10, digitos) > 1)
            {
                digitos = digitos + 1;
            }
            
            digitos = digitos - 1;
                
            for(i = 0; i <= digitos; i++)
            {
                digito = octal/pow (10, digitos - i);
                octal = octal-(digito * pow (10, digitos - i));
                decimal = decimal + (digito * pow(8, digitos - i));
            }

            cout<<"\n-----------------------------------------------------------------\n"
            "Su numero decimal es:\n"<<decimal<<endl;

           
            volver(opc, 5);
        }

        else if (opc==6) //hexadecimal a decimal
        {
            string hex;
            long long decimal;

            system("cls");

            cout<<"Escriba el numero hexadecimal que desea convertir: ";
            cin>>hex;

              short i = 0, digitos = 0;
   

            digitos = hex.length() - 1;
            
            for(i = 0; i <= digitos; i++)
            {
                // Letras de la A a la F
                if(hex[i] >= 65 && hex[i] <= 70){
                    decimal = decimal + ((hex[i] - 55) * pow(16, digitos - i));
                }
                // Letras de la a a la f
                else if(hex[i] >= 97 && hex[i] <= 102){
                    decimal = decimal + ((hex[i] - 87) * pow(16, digitos - i));
                }
                // Numeros del 0 al 9   
                else if (hex[i] >= 48 && hex[i] <= 57){
                    decimal = decimal + ((hex[i] - 48) * pow(16, digitos - i));
                }
            }

            cout<<"Su numero decimal es: "<<decimal<<endl;

            
            volver(opc, 5);
        }

        else if (opc==7) // volver
        {
            volver(opc, 0);
        }   
            
    }

    else {
        opcion_invalida(opc, 5);
    }
    

}








//Arreglos y Matrices








// funciones adicionales ------------------------------------------------------


void llenar_arreglo(int (&arr)[], int n){

    int cont = 0;

    while (cont < n) 
    {
        int num;
        bool repetido = false;

        cout << "Ingrese un valor entero: ";
        cin >> num;
        validar_entrada();
         
        for (int i = 0; i < cont; i++) 
        {
            if (arr[i] == num) 
            {
                repetido = true;
                break;
            }
        }

            if (repetido) 
            {
                cout << "El valor ya existe. Intente nuevamente\n";
            } 
            else 
            {
                arr[cont] = num;
                cont++;
            }
    }

}

void ordenar_burbuja(int (&arr)[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
            }
        }
    }
}

void llenar_matriz(int (&matriz)[3][3]){

    int n=0;

    for (int i = 0; i < 3; i++)
    {
        cout<<"fila: "<<i+1<<endl;

        for (int j = 0; j < 3; j++)
        {
            cout<<"Ingrese el valor de la columna "<<j+1<<": ";
            cin>>n;
            validar_entrada();
            matriz[i][j]=n;
        } 
        system("cls");
    }
}

void imprimir_matriz(int (&matriz)[3][3]){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz[i][j]<<"    ";
        }

        cout<<"\n";
        
    }
    

}


//-----------------------------------------------------------------------------


void arreglos_matrices(int &opc){

    if (opc>=1 && opc<=6)
    {
        system("cls");
        if (opc==1) // Ordenamiento de un arreglo (mayor a menor)
        {

            int n=10;
            int arr[n];

            cout<<"\t\tOrdenamiento de un arreglo"
            "\n-----------------------------------------------------------------\n";

            cout<<"Llenar el arreglo: "<<endl;

            llenar_arreglo(arr, n);
            
            system("cls");

            cout<<"Arreglo Original: "<<endl;


            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }

            ordenar_burbuja(arr, n); 

            cout<<"\n\nArreglo ordenado (de mayor a menor): "<<endl;

            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }

            cout<<"\n-----------------------------------------------------------------\n";


            volver(opc, 6);

        }

        else if (opc==2) // Buscar un valor en un arreglo
        {
            int n=10;
            int arr[n];
            int bus;

            cout<<"\t\tBuscar un valor en un arreglo"
            "\n-----------------------------------------------------------------\n";

            cout<<"Llenar el arreglo: "<<endl;

            llenar_arreglo(arr, n);
            system("cls");
            cout<<"Su arreglo es :\n";
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<"   ";
            }
            
            cout<<"\nIngrese el valor que desea buscar en el arreglo: ";
            cin>>bus;

            bool existe=true;

            for (int i = 0; i < n; i++)
            {
                if (bus==arr[i])
                {
                    existe=true;
                    cout<<"\nEl valor se encuentra en la posicion del 0 al 9 en: "<<i<<" y en la posicion del 1 al 10 en: "<<i+1<<endl;
                    break;
                }

                else if (!(bus==arr[i]))
                {
                    existe=false;
                }
                
            }

            if (!existe)
            {
                cout<<"El valor no se encuentra en el arreglo";
            }

            volver(opc, 6);
        }

        else if (opc==3) // Suma de matrices
        {
            int matriz[3][3];
            int matriz_2[3][3];

            cout<<"\t\tSuma de matrices"
            "\n-----------------------------------------------------------------\n"

            "llenar matriz 1: "<<endl;
            llenar_matriz(matriz);

            cout<<"llenar matriz 2: "<<endl;
            llenar_matriz(matriz_2);

            cout<<"Su matriz 1 es: "<<endl;
            imprimir_matriz(matriz);

            cout<<"Su matriz 2 es: "<<endl;
            imprimir_matriz(matriz_2);

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    matriz[i][j]+=matriz_2[i][j];
                }
                
            }

            cout<<"\n-----------------------------------------------------------------\n";

            cout<<"La suma de las matrices es: "<<endl;
            imprimir_matriz(matriz);
            
            volver(opc, 6);
        }

        else if (opc==4) //  Multiplicación de matrices
        {
            int matriz[3][3];
            int matriz_2[3][3];
            int matriz_3[3][3]={{0,0,0},
                                {0,0,0},
                                {0,0,0}};
            int suma=0;


            cout<<"\t\tMultiplicacion de matrices"
            "\n-----------------------------------------------------------------\n"

            "llenar matriz 1: "<<endl;
            llenar_matriz(matriz);

            cout<<"llenar matriz 2: "<<endl;
            llenar_matriz(matriz_2);

            cout<<"Su matriz 1 es: "<<endl;
            imprimir_matriz(matriz);

            cout<<"Su matriz 2 es: "<<endl;
            imprimir_matriz(matriz_2);

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    suma=0;
                    for(int k = 0; k < 3; k++)
                    {
                        suma+=matriz[i][k]*matriz_2[k][j];
                        

                    }
                    
                    matriz_3[i][j]+=suma;
                }
                
            }

            cout<<"\n-----------------------------------------------------------------\n";

            cout<<"La multiplicacion de las matrices es: "<<endl;
            imprimir_matriz(matriz_3);

            volver(opc, 6);
        }

        else if (opc==5) // Buscar un valor en una matriz
        {
            int matriz[3][3] = {{0, 0, 0},
                                {0, 0, 0},
                                {0, 0, 0}};
            int num;
            
            cout<<"\t\tBuscar un valor en una matriz"
            "\n-----------------------------------------------------------------\n";

            cout<<"llenar matriz: "<<endl;
            llenar_matriz(matriz);

            cout<<"Su matriz es: "<<endl;
            imprimir_matriz(matriz);

            cout<<"Ingrese el valor que desea buscar: ";
            cin>>num;

            int i, j;
            bool existe=false;

            for (i = 0; i < 3; i++) 
            {
                for (j = 0; j < 3; j++) 
                {
                    if (num == matriz[i][j]) 
                    {
                        existe = true;
                        break;
                    }
                }

                if (existe) 
                {
                    break;
                }
            }
            
            if (!existe)
            {
                cout<<"El valor no se encuentra en la matriz";
            }
            else
            {
                cout<<"El valor se encuentra en la fila: "<<i+1<<" y en la columna: "<<j+1<<endl;
            }
            
            volver(opc, 6);
        }

        else if (opc==6) // Volver
        {
            volver(opc, 0);
        }
        
    }

    else{
        opcion_invalida(opc,6);
    }
    

}








//Varios








// Funciones adicionales--------------------------------------------------------

void fibonacci(int n) {
    int a = 1, b = 1, temp = 0;

    for (int i = 0; i < n; ++i) 
    {
      
            cout << a << "   ";
       

        temp = a;
        a = b;
        b = temp + b;
    }
}

//------------------------------------------------------------------------------


void varios_(int &opc){

    if (opc>=1 && opc<=7)
    {
        system("cls");
        if (opc==1) // Distancia entre dos puntos
        {
            float distancia, x1, y1, x2, y2;

            cout<<"\t\tDistancia entre dos puntos"
            "\n-----------------------------------------------------------------\n";

            cout<<"Ingrese el valor de X1: ";
            cin>>x1;
            cout<<"Ingrese el valor de Y1: ";
            cin>>y1;
            cout<<"Ingrese el valor de X2: ";
            cin>>x2;
            cout<<"Ingrese el valor de Y2: ";
            cin>>y2;
            validar_entrada();

            distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

            cout<<"\n-----------------------------------------------------------------\n";
            
                cout<<"La distancia entre los puntos \n"
                      "("<<x1<<" , "<<y1<<") y ("<<x2<<" , "<<y2<<") es: "<<distancia;
            volver(opc, 7);
        }

        else if (opc==2) //Raices de una funcion cuadratica
        {
            int a, b, c, arg_raiz;
            float x1, x2;

            cout<<"\t\tRaices de una funcion cuadratica"
            "\n-----------------------------------------------------------------\n";

            cout<<"Ingrese el valor de A: ";
            cin>>a;
            cout<<"Ingrese el valor de B: ";
            cin>>b;
            cout<<"Ingrese el valor de C: ";
            cin>>c;
            validar_entrada();

            arg_raiz = pow(b, 2) - (4*a*c);

            cout<<"\n-----------------------------------------------------------------\n";

            if(arg_raiz < 0)
            {
                cout<<"La funcion no tiene raices reales";
            }

            else
            {
                x1 = (-b - sqrt(arg_raiz))/(2*a);
                x2 = (-b + sqrt(arg_raiz))/(2*a);
                cout<<"X1 es: "<<x1<<"\nX2 es: "<<x2;    
            } 

            volver(opc, 7);
        }

        else if (opc==3) // Factorial
        {
            int num=0;
            int fac=1;

            cout<<"\t\tNumero factorial"
            "\n-----------------------------------------------------------------\n";

            cout<<"Ingrese el numero factorial: ";
            cin>>num;

            for (int i = 1 ; i <= num; i++)
            {
                fac*=i;
            }
            cout<<"el numero factorial es: "<<fac;
            

            volver(opc, 7);
        }

        else if (opc==4) // Fibonacci
        {
            int n;

            cout <<"\t\tSucesion de Fibonacci"
            "\n-----------------------------------------------------------------\n"
            "Ingrese el numero de terminos a mostrar ";
            cin >> n;
            validar_entrada();
            fibonacci(n);

            volver(opc, 7);
        }

        else if (opc==5) // primo
        {
            int n = 0, c = 1, m = 2;

            cout<<"\t\tNumero primo"
            "\n-----------------------------------------------------------------\n";

            cout<<"Ingrese un numero: ";
            cin>>n;

            while (c != 0){
                c = n % m;
                m = m + 1;
            }

            if (m - 1 == n){
                cout<<"El número "<<n<<" es primo"<<endl;
            }
            else{
                cout<<"El número "<<n<<" no es primo"<<endl;
            }
            
            volver(opc, 7);
        }
        
        else if (opc==6) // Numeros Amigos
        {
            int num1=0,num2=0;
            int suma1=0,suma2=0;

            cout<<"\t\tNumeros amigos"
            "\n-----------------------------------------------------------------\n";

            cout<<"Ingresa el primer numero: ";
            cin>>num1;

            cout<<"Ingresa el segundo numero: ";
            cin>>num2;

            for (int i = 1; i < num1; i++)
            {
                if (num1%i==0)
                {
                    suma1+=i;
                }
                
            }
            
            cout<<"la suma de los divisores del primer numero es: "<<suma1<<endl;

            for (int j = 1; j < num2; j++)
            {
                if (num2%j==0)
                {
                    suma2+=j;
                }
                
            }

            cout<<"la suma de los divisores del segundo numero es: "<<suma2<<endl;

            if (suma1==num2 && suma2==num1)
            {
                cout<<"los numeros "<<num1<<" y "<<num2<<" son amigos"<<endl;
            }

            else
            {
                cout<<"los numeros "<<num1<<" y "<<num2<<" no son amigos"<<endl;
            }
            
            

            volver(opc, 7);
        }

        else if (opc==7) // Volver
        {
            volver(opc, 0);
        }

    }

    else {
        opcion_invalida(opc, 7);
    }
    

}








// Funciones de manejo de codigo








void opcion_invalida(int &opc, int opc_2){
    system("cls");
    cout<<"Opcion invalida"<<endl;
    system("pause");
    opc=opc_2;
    main();
}

void volver(int &opc, int opc_2){
    cout<<endl;
    system("pause");
    opc=opc_2;
    main();

}


