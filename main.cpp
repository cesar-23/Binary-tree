#include "Bitree.h"
using namespace std;
int main()
{ 
    Bitree<int> Mytree;
    cout<<"Comprobacion de Funciones"<<endl;
    int opcion;
    do
    {
        cout<<"1) Constructor"<<endl<<
            "2) Insertar"<<endl<<
            "3) Eliminar"<<endl<<
            "4) Buscar"<<endl<<
            "5) Preorden"<<endl<<
            "6) Inorden"<<endl<<
            "7) Postorden"<<endl<<
            "8) Clear"<<endl<<
            "9) Graficar"<<endl<<
            "10) Terminar programa\n";

        cout<<"Elige una opcion: "<<endl;
        cin>>opcion;
        while(opcion<1 || opcion>10)
        {
            cout<<"Ingrese un valor valido\n";
            cin>>opcion;
        }
        if (opcion == 1) //Constructor
        {
            cout<<"El arbol ya esta creado\n";
        }
        if (opcion == 2) //Insert
        {
            int aux;
            do
            {
                cout<<"Elija una opcion:"<<endl<<
                "1)Insertar nuevo numero"<<endl<<
                "2)Dejar de insertar\n";
                cin>>aux;
                if(aux==1){
                    int dato;
                    cout<<"Ingrese el numero a insertar:\n";
                    cin>>dato;
                    Mytree.Insert(dato);
                }
            }while(aux!=2);

        }
        if (opcion == 3) //Eliminar
        {
            int aux;
            do
            {
                cout<<"Elija una opcion:"<<endl<<
                "1)borrar un numero"<<endl<<
                "2)Dejar de borrar\n";
                cin>>aux;
                if(aux==1){
                    int dato;
                    cout<<"Ingrese el numero a eliminar:\n";
                    cin>>dato;
                    Mytree.Remove(dato);
                    cout<<"El elemento fue eliminado\n";
                }
            }while(aux!=2);
        }
        if (opcion == 4) //Buscar
        {
            int aux;
            do
            {
                cout<<"Elija una opcion:"<<endl<<
                "1)Buscar un nuevo numero"<<endl<<
                "2)Dejar de buscar\n";
                cin>>aux;
                if(aux==1){
                    int dato;
                    cout<<"Ingrese el numero a insertar:\n";
                    cin>>dato;
                    if(Mytree.Search(dato))
                    {
                        cout<<"El elemento: "<<dato<<" Si esta en el arbol\n";
                    }else{
                        cout<<"No se encontro: "<<dato<<" en el arbol\n";
                    }
                }
            }while(aux!=2);
        }
        if (opcion == 5) //Imprimir pre_orden
        {
            cout<<"El recorrido en pre orden es:\n";
            Mytree.Pre_Order();
            cout<<"\n";
        }
        if (opcion == 6) //Imprimir in_orden
        {
            cout<<"El recorrido en in orden es:\n";
            Mytree.In_Order();
            cout<<"\n";
        }
        if (opcion == 7) //Imprimir post_orden
        {
            cout<<"El recorrido en post orden es:\n";
            Mytree.Post_Order();
            cout<<"\n";
        }
        if (opcion == 8) //Clear
        {
            cout<<"en construccion";
        }
        if (opcion == 9) //graficar
        {
            cout<<"en construccion";
        }
    }while(opcion != 10);
    cout<<"Se finalizo el programa, gracias ;D";
    return 0;
}
/*
int main(){
    Bitree<int> Mytree;
    Mytree.Insert(3);
    Mytree.Insert(5);
    Mytree.Insert(1);
    Mytree.Insert(7);
    Mytree.Insert(26);
    Mytree.Insert(20);
    Mytree.Insert(18);
    Mytree.Insert(14);
    Mytree.Pre_Order();
    cout<<"\n";
    Mytree.In_Order();
    cout<<"\n";
    Mytree.Post_Order();
    cout<<"\n";
    if(Mytree.Search(9))
        cout<<"yei\n";
    else
        cout<<"xdn't\n";
    Mytree.Remove(88);
    return 0;
}
*/