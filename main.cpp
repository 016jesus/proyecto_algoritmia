#include <iostream>
#include <cmath>

using namespace std;

void areas_(int &opc);
void volumenes_(int &opc);
void temperaturas_(int &opc);
void monedas_(int &opc);
void numericos_(int &opc);
void arreglos_matrices(int &opc);
void varios_(int &opc);
//agrego un comentario de prueba
void opcion_invalida();
void volver(int &opc, int opc_2);

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
            "\n2. Paralelepípedo"
            "\n3. Cubo"
            "\n4. Regresar al menú principal"
            "\nIngrese una opcion: ";
            cin>>opc;
            volumenes_(opc);
                break;
                case 3:
    cout<<"Sub-menu temperaturas"
                 "\n1. De Celsius a kelvin"
                 "\n2. De Kelvin a Fahrenheit"
                 "\n3. De Fahrenheit a Celsius"
                 "\n4. Regresar al menú principal"
                 "\nIngrese una opcion: ";
                 cin>>opc;
                 //temperaturas_(opc);
                break;
                case 4:
    cout<<"Ingrese la opcion a calcular"
                 "\n1. De pesos a dólares"
                 "\n2. De pesos a euros"
                 "\n3. De dólares a pesos"
                 "\n4. De euros a pesos"
                 "\n5. De euros a dólares"
                 "\n6. De dólares a euros"
                 "\n7. Regresar al menú principal"
                 "\nIngrese una opcion: ";
                 cin>>opc;
                 //monedas_(opc);
                break;
                case 5:
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
  cout<< "Ingrese la opcion a calcular"
                 "\n1. Ordenamiento de un arreglo"
                 "\n2. Buscar un valor en un arreglo"
                 "\n3. Suma de matrices"
                 "\n4. Multiplicación de matrices"
                 "\n5. Buscar un valor en una matriz"
                 "\n6. Regresar al menú principal"
                 "\nIngrese una opcion: ";
                 cin>>opc;
                 //arreglos_matrices(opc);
                break;
                case 7:
  cout<<"Sub-menu Varios"
                 "\n1. Distancia entre dos puntos"
                 "\n2. Raíces de una función cuadrática"
                 "\n3. Factorial"
                 "\n4. Fibonacci"
                 "\n5. Primo"
                 "\n6. Números amigos"
                 "\n7. Regresar al menú principal"
                 "\n Ingrese una opcion: ";
                 cin>>opc;
                 //varios(opc);
                break;
                case 8:
               system("cls");
               cout<<"Programa finalizado";
                break;
                default:
                opc = 0;
                opcion_invalida();
                
                
            }
            
            
                    
     return 0;    
}





void areas_ (int &opc){
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
        
                    opc=1;
                    main();
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
        
                    opc=1;
                    main();
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
        
                    opc=1;
                    main();
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
        
                    opc=1;
                    main();
            };
        }

        else if (opc==5) //volver al menú principal
        {
            system("cls");
            volver (opc, 0);            
        }

        else 
        {
            opc = 1;
            opcion_invalida(); 
        }        
    } 
    
    else
    {
        opc = 1;
        opcion_invalida();
    } 

}

void volumenes_(int &opc){
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
        
            opc=2;
            main();
            }
        }

        else if(opc ==2)//volumen paralelepipedo
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
                opc = 2;
                main();
                
            }
        }

        else if(opc == 4)
        {
            volver(opc,0);

        }

    else 
    {
      opc = 2;
      opcion_invalida();   
    }
 

    
}
else{
    opc = 2;
    opcion_invalida();
   
    
}

}




void opcion_invalida(){
    system("cls");
    cout<<"Opcion invalida"<<endl;
    system("pause");
    main();
}

void volver(int &opc, int opc_2){
    opc=opc_2;
    main();

}