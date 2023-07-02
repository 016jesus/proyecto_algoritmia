#include <iostream>
#include <cmath>
#include <string>

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

long long hexadecimal_decimal(string hexadecimal);
long long octal_decimal(long long octal);

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
        

        cout<<"\t\t\tSub-menu monedas"
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

        cout<<"\t\t\tSub-menu Sistemas Numericos"
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
  

        cout<< "\t\t\tSub-menu arreglos y matrices"
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
        //arreglos_matrices(opc);
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
        //varios(opc);
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
            cout<<"\t\t\tArea de un cuadrado"
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
            cout<<"\t\t\tVolumen de una esfera"
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
            cout<<"\t\t\tVolumen Paralelepipedo"
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
            cout<<"Ingrese la medida del cubo especificada: "
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
                cout<<"Ingrese el valor del Celcius : ";
                cin>>cel;

            cout<<"La temperatura de Celcius en grados kelvin es: "<<cel+273.15<<endl;
            system("pause");
                volver(opc, 3);   
        }

        else if (opc==2) //kelvin a fahrenheit
        {
            float kel;
                cout<<"Ingrese el valor del Kelvin : ";
                cin>>kel;

            cout<<"La temperatura de Kelvin en grados Fahrenheit es: "<<((kel-273.16)*9/5)+32<<endl;
            system("pause");
                volver(opc, 3);;
        }
        
        else if (opc==3) //fahrenheit a celcius
        {
            float fa;
                cout<<"Ingrese el valor del Fahrenheit : ";
                cin>>fa;

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


void convertir_monedas(string m_1, string m_2){

     float tasa, valor;

        cout<<"Escriba la tasa de cambio de "<<m_2<<" a "<<m_1<<": ";
        cin >> tasa;
        cout<<"Ingrese el valor en "<<m_1<<": ";
        cin>> valor;

            if(tasa<=0 || valor <=0)
            {
                opcion_invalida(opc, 4);
            }

            else 
            {
                cout<<"Valor en "<<m_2<<": "<<valor/tasa<<endl;
                system("pause");
                volver(opc, 4);
            }
}

void monedas_(int &opc){

    string monedas[3]={"Peso (COP)", "Dolar (USD)", "Euro (EUR)" };

    if (opc>=1 && opc<=7) 
    {


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
            int dec=0;
            short res=0;
            string bin="";

            cout<<"Escriba su numero decimal: ";
            cin>>dec;

            while (dec!=1)
            {
                res= dec%2;
                bin= to_string(res) + bin;
                dec= dec - (dec%2);
                dec/= 2;
            }
            
            bin="1"+bin;

            cout<<"Su numero en binario es: "<<bin<<endl;
            system("pause");
            volver(opc, 5);
            
        }

        else if (opc==2) //decimal a octal
        {
            long long dec = 0;
            string octal ="";
            cout<<"Ingrese su numero decimal: ";
            cin>>dec;
            
            do{
                octal = to_string(dec%8) + octal;
                dec = dec - (dec%8);
                dec/=8;
                
            } while( dec >= 1);
            cout<<"Su numero en octal es :"<<octal;
            volver(opc, 5);
        }

        else if (opc==3) //decimal a hexadecimal
        {
            string hex = "";
            long long dec = 0;
            char digito;
            short r;
            
            cout<<"Ingrese su numero decimal a convertir: ";
            cin>>dec;
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
            cout<<"Su numero en hexadecimal es: "<<hex;
            volver(opc, 5);
        }

        else if (opc==4) //binario a decimal
        {
            string bin;
            long long decimal;

            cout<<"Escriba el numero binario que desea convertir: ";
            cin>>bin;

              short  digitos = bin.length() - 1;
    
    for(short i = 0; i <= digitos; i++){
        if(bin[i] == '1'){
            decimal = decimal + pow(2, digitos - i);
        }
    }

            cout<<"Su numero decimal es: "<<decimal<<endl;

            volver(opc, 5);
        }

        else if (opc==5) //octal a decimal
        {
            long long octal;
            


            cout<<"Escriba el numero octal que desea convertir: ";
            cin>>octal;

              short i = 0, digitos = 0, digito = 0;
              long long decimal = 0, temporal = 0;
    
    system("cls");

    

    while (octal/pow(10, digitos) > 1){
        digitos = digitos + 1;
    }
    
    digitos = digitos - 1;
        
    for(i = 0; i <= digitos; i++){
        digito = octal/pow (10, digitos - i);
        octal = octal-(digito * pow (10, digitos - i));
        decimal = decimal + (digito * pow(8, digitos - i));
    }

            cout<<"Su numero decimal es: "<<decimal<<endl;

           
            volver(opc, 5);
        }

        else if (opc==6) //hexadecimal a decimal
        {
            string num;
            long long decimal;

            system("cls");

            cout<<"Escriba el numero hexadecimal que desea convertir: ";
            cin>>num;

            decimal=hexadecimal_decimal(num);

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








long long hexadecimal_decimal(string hexadecimal){
     
    short pos = 0, digitos = 0;
    long long decimal = 0;

    digitos = hexadecimal.length() - 1;
    
    for(pos = 0; pos <= digitos; pos++){
        // Letras de la A a la F
        if(hexadecimal[pos] >= 65 && hexadecimal[pos] <= 70){
            decimal = decimal + ((hexadecimal[pos] - 55) * pow(16, digitos - pos));
        }
        // Letras de la a a la f
        else if(hexadecimal[pos] >= 97 && hexadecimal[pos] <= 102){
            decimal = decimal + ((hexadecimal[pos] - 87) * pow(16, digitos - pos));
        }
        // Numeros del 0 al 9   
        else if (hexadecimal[pos] >= 48 && hexadecimal[pos] <= 57){
            decimal = decimal + ((hexadecimal[pos] - 48) * pow(16, digitos - pos));
        }
    }

    return decimal;
}













































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


