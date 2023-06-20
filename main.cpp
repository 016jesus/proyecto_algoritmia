#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

void areas_(int &opc);
void volumenes_(int &opc);
void temperaturas_(int &opc);
void monedas_(int &opc);
void numericos_(int &opc);
void arreglos_matrices(int &opc);
void varios_(int &opc);


void opcion_invalida(int &opc, int opc_2);
void volver(int &opc, int opc_2);
bool tiene_caracteres(int input);
void convertir_monedas(float cop, float tasa);

int opc=0;

int main(){
    system("cls");

    
    
    if (opc != 0){
    goto salto;
    }

    //menu principal
    cout<<"Menu principal"
    "\n1. Areas"
    "\n2. Volumenes "
    "\n3. Temperaturas "
    "\n4. Monedas "
    "\n5. Conversor Sistemas numericos "
    "\n6. Arreglos y matrices "
    "\n7. Varios"
    "\n8. Salir"
    "\nIngrese una opcion: ";
    cin>>opc;          
           
            salto:
            
        switch(opc){     
        case 1:         
        system("cls");
                 
        cout<<"Sub-menu areas"
        "\n1. Triangulo"
        "\n2. Circulo"
        "\n3. Rectangulo"
        "\n4. Cuadrado"
        "\n5. Regresar al menu principal"
        "\nIngrese una opcion: "; 
        cin>>opc;
        areas_(opc);
        break;


        case 2:
        system("cls");
        
        cout<<"Sub-menu volumenes"
        "\n1. Esfera"
        "\n2. Paralelepipedo"
        "\n3. Cubo"
        "\n4. Regresar al menu principal"
        "\nIngrese una opcion: ";
        cin>>opc;
        volumenes_(opc);
        break;
                
        case 3:
        system("cls");

        cout<<"Sub-menu temperaturas"
        "\n1. De Celsius a kelvin"
        "\n2. De Kelvin a Fahrenheit"
        "\n3. De Fahrenheit a Celsius"
        "\n4. Regresar al menu principal"
        "\nIngrese una opcion: ";
        cin>>opc;
        temperaturas_(opc);
        break;
                
        case 4:
        system("cls");

        cout<<"Ingrese la opcion a calcular"
        "\n1. De Pesos a Dolares"
        "\n2. De Pesos a Euros"
        "\n3. De Dolares a Pesos"
        "\n4. De Euros a Pesos"
        "\n5. De Euros a Dolares"
        "\n6. De Dolares a Euros"
        "\n7. Regresar al menu principal"
        "\nIngrese una opcion: ";
        cin>>opc;
        monedas_(opc);
        break;
                
        case 5:
        system("cls");

        cout<<"Sub-menu Sistemas Numericos"
        "\n1. Convertir de decimal a binario"
        "\n2. Convertir de decimal a octal"
        "\n3. Convertir de decimal a hexadecimal"
        "\n4. Convertir de binario a decimal"
        "\n5. Convertir de octal a decimal"
        "\n6. Regresar al menu principal"
        "\nIngrese una opcion: ";
        cin>>opc;
        //numericos_(opc);
        break;
                
        case 6:
        system("cls");

        cout<< "Ingrese la opcion a calcular"
        "\n1. Ordenamiento de un arreglo"
        "\n2. Buscar un valor en un arreglo"
        "\n3. Suma de matrices"
        "\n4. Multiplicacion de matrices"
        "\n5. Buscar un valor en una matriz"
        "\n6. Regresar al menu principal"
        "\nIngrese una opcion: ";
        cin>>opc;
        //arreglos_matrices(opc);
        break;
                
        case 7:
        system("cls");

        cout<<"Sub-menu Varios"
        "\n1. Distancia entre dos puntos"
        "\n2. Raices de una funcion cuadratica"
        "\n3. Factorial"
        "\n4. Fibonacci"
        "\n5. Primo"
        "\n6. Numeros amigos"
        "\n7. Regresar al menu principal"
        "\n Ingrese una opcion: ";
        cin>>opc;
        //varios(opc);
        break;
                
        case 8:
        system("cls");

        cout<<"Programa finalizado";
        break;
                
        default: 
         opcion_invalida(opc, 0);
                
                
        }
            
            
                    
     return 0;    
}








//Areas








void areas_ (int &opc)
{
    system("cls");

    if (opc >=1 && opc <=5)
    {
        if (opc==1) //area del triangulo
        {
            float base=0, altura=0;
                cout<<"ingrese el valor de la base: ";
                cin>>base;
                cout<<"ingrese el valor de la altura: ";
                cin>>altura;

            if (base<=0 || altura<=0)
            {
               cout<<"Los valores son invalidos"<<endl;
                system("pause");
                areas_(opc); 
            }
            
            else 
            {
                
                cout<<"el valor del area del triangulo es: "<<(base*altura)/2<<endl;
                system("pause");
        
                    volver(opc,1);
            }
        }

        else if (opc==2) //area del circulo
        {
            float radio;
                cout<<"ingrese el valor del radio : "<<endl;
                cin>>radio;

            if (radio<=0)
            {
               cout<<"valor invalido"<<endl;              
                system("pause");                
                areas_(opc); 
            }
            
            else 
            {
                
                cout<<"el valor del area del circulo es: "<<(M_PI*(pow(radio,2)))<<endl;
                system("pause");
        
                    volver(opc,1);
            }
        }

        else if (opc==3) //area del rectangulo
        {
            float base, altura;
                cout<<"ingrese el valor de la base: ";
                cin>>base;
                cout<<"ingrese el valor de la altura: ";
                cin>>altura;

            if (base<=0 || altura<=0)
            {
               cout<<"Los valores son invalidos"<<endl;
                system("pause");
                areas_(opc); 
            }
            
            else 
            {
                
                cout<<"el valor del area del rectangulo es: "<<(base*altura)<<endl;
                system("pause");
        
                    volver(opc,1);
            };
        }

        else if (opc==4) //area del cuadrado
        {
            float lado;
                cout<<"ingrese el valor de la base: ";
                cin>>lado;

            if (lado<=0)
            {
               cout<<"valor invalido"<<endl;
                system("pause");
                areas_(opc); 
            }
            
            else 
            {
                
                cout<<"el valor del area del cuadrado es: "<<(lado*lado)<<endl;
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

        if(opc==1){

            float radio = 0;
                cout<<"Ingrese el valor del radio de la esfera:  ";
                cin>>radio;
                //volumen esfera
            
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

                cout<<"Ingrese las medidas del paralelepipedo: "
                "\nAncho: ";
                cin>>ancho;
                cout<<"Altura: ";
                cin>>altura;
                cout<<"Longitud: ";
                cin>>longitud;

            if(ancho<=0 || altura <= 0 || longitud <=0){
                cout<<"No puede ingresar valores negativos"<<endl;
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
















































void opcion_invalida(int &opc, int opc_2){
    system("cls");
    cout<<"Opcion invalida"<<endl;
    system("pause");
    opc=opc_2;
    main();
}

void volver(int &opc, int opc_2){
    opc=opc_2;
    main();

}
// bool tiene_caracteres(int var){
// int var;
// std::cin >> var;

// if( std::cin.fail() )
// {
//   std::cout << "ERROR"\n;
//   std::cin.clear();
// }
// std::cin.ignore(std::numeric_limits<int>::max(),'\n');
// }


