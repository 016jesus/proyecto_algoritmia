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

void opcion_invalida();

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
                 cout<<opc;
  cout<<"Sub-menu areas"
              "\n1. Triangulo"
              "\n2. Circulo"
              "\n3. Rectangulo"
              "\n4. Cuadrado"
              "\n5. Regresar al menu principal"
              "\nIngrese una opcion: "; 
                cin>>opc;
               //areas_(opc);
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
cout<<"Ingrese la opcion a calcular"
             "\n1. Convertir de decimal a binario"
             "\n2. Convertir de decimal a octal"
             "\n3. Convertir de decimal a hexadecimal"
             "\n4. Convertir de binario a decimal"
             "\n5. Convertir de octal a decimal"
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



void volumenes_(int &opc){
    system("cls");
if(opc >= 1 && opc <= 4){
        if(opc==1){
            float radio = 0;
            cout<<"Ingrese el valor del radio de la esfera en cm:  ";
            cin>>radio;
            //volumen esfera
            if(radio<=0){
                cout<<"Valor invalido"<<endl;
                
                system("pause");
                
                volumenes_(opc);
            }
                   else{
            
                    radio = (4/3) * M_PI * (pow(radio, 3));
                   cout<<"El volumen de la esfera es: "<<radio<<"cm³"<<endl;
        
                    system("pause");
        
                    opc=2;
                    main();
                    }
        }
        else if(opc ==2){
            //volumen paralelepipedo
            //ancho * longitud * altura
         float ancho = 0, longitud = 0, altura = 0;
            cout<<"Ingrese las medidas del paralelepipedo (cm) "
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
            
            cout<<"El volumen del paralelepipedo es: "<<ancho * longitud * altura<<"cm³"<<endl;
        system("pause");
        opc=2;
        main();
        }
           else if(opc == 3){
        //cubo
        // lado³
        float lado = 0;
        cout<<"Ingrese la medida del cubo especificada (cm): "
        "\nLado: ";
        
        cin>>lado;
        if(lado<=0){
                opc = 3;
                cout<<"Valor invalido"<<endl;
                system("pause");
                volumenes_(opc);
        }
            else{
                   cout<<"El volumen del cubo con lado "<<lado<<" es: "<<pow(lado, 3)<<"cm³"<<endl;
                system("pause");
                opc = 2;
                main();
                
            }
            }
          else if(opc == 4){
        opc=0;
        main();
    }
    else {
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