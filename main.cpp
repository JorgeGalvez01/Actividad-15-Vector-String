#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> strings;
    int opcion;

    while (true)
    {
        cout << "1) Agregar al final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Ultimo" << endl;
        cout << "6) Ordenar" << endl;
        cout << "7) Insertar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Eliminar ultimo" << endl;
        cout << "0) Salir" << endl;

        cin >> opcion;
        cin.sync();

        if (opcion == 1)
        {
            string cadena;

            cout << "cadena: ";
            getline(cin, cadena);
            strings.push_back(cadena);
        }
        else if (opcion == 2)
        {
            for (size_t i = 0; i < strings.size(); i++)
            {
                cout << strings[i] << ", ";
            }
            cout << endl;
        }
        else if (opcion == 3)
        {
            size_t tamano;
            string cadena;

            cout<<"Tamano: ";
            cin>>tamano;
            cout<<"Cadena: ";
            cin.ignore();
            getline(cin, cadena);

            strings = vector<string>(tamano, cadena);
        }
        else if (opcion == 4)
        {
            if (strings.empty())
            {
                cout << "El vector esta vacio" << endl;
            }
            else
            {
                cout << strings.front() << endl;
            }
        }
        else if (opcion == 5)
        {
            if (strings.empty())
            {
                cout << "El vector esta vacio" << endl;
            }
            else
            {
                cout << strings.back() << endl;
            }
        }
        else if (opcion == 6)
        {
            sort(strings.begin(), strings.end(), greater<string>());
        }
        else if (opcion == 7)
        {
            size_t posicion;
            string cadena;

            cout << "Posicion: ";
            cin >> posicion; cin.ignore();
            cout << "Cadena: ";
            cin.ignore();
            getline(cin, cadena);

            if (posicion >= strings.size())
            {
                cout << "Posicion no valida" << endl;
            }
            else
            {
                strings.insert(strings.begin()+posicion, cadena);
            }
        }
        else if (opcion == 8)
        {
            size_t posicion;

            cout << "Posicion: ";
            cin >> posicion; cin.ignore();

            if (posicion >= strings.size())
            {
                cout << "Posicion no valida" << endl;
            }
            {
                strings.erase(strings.begin()+posicion);
            }
        }
        else if (opcion == 9)
        {
            if (strings.empty())
            {
                cout << "El vector esta vacio" << endl;
            }
            else
            {
                strings.pop_back();
            }
            
        }
        
        else if (opcion == 0)
        {
            break;
        }
    }
    
    
    return 0;
}