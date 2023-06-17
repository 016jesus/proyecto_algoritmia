#include <iostream>
#include <cmath>

using namespace std;

void areas_(int opc);
void volumenes_(int opc);
void temperaturas_(int opc);
void monedas_(int opc);
void numericos_(int opc);
void arreglos_matrices(int opc);
void varios_(int opc);


int main(){
    
int opc=0;
system("cls");
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
               //areas_(opc);
                break;
                case 2:
                cout<<"Sub-menu volumenes"
            "\n1. Esfera"
            "\n2. Paralelepípedo"
            "\n3. Cubo"
            "\n4. Regresar al menú principal"
            "\nIngrese una opcion: ";
            cin>>opc;
            //volumenes_(opc);
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
     "\nIngrese una opcion: ";
            cin>>opc;
            //varios(opc);
                break;
                case 8:
               system("cls");
               cout<<"Programa finalizado";
                break;
                default:
                system("cls");
                cout<<"Opcion invalida"<<endl;
                system("pause");
                main();
                
                
            }
            
            
                    
     return 0;    
}