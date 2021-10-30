#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Math.h>
#include <Windows.h>

using namespace std;
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = (SHORT)x - 1;
    coord.Y = (SHORT)y - 1;
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int a, b, c, d, e, f, g, h, i, j, k;
int pl;

void menu()
{
    system("cls"); system("color f0");
    gotoxy(15, 3); cout << "-----------------------------------";
    gotoxy(15, 4); cout << "___________Operaciones_____________";
    gotoxy(15, 5); cout << "|  1. Suma de Matrices            |";
    gotoxy(15, 6); cout << "|  2. Multiplicacion de Matrices  |";
    gotoxy(15, 7); cout << "|  3. Transpuesta de Matrices     |";
    gotoxy(15, 8); cout << "|  4. Salir                       |";
    gotoxy(15, 9); cout << "-----------------------------------";
    gotoxy(15, 10); cout << "ingrese una opcion [ ]";
    gotoxy(35, 10); cin >> pl;
}

void Suma()
{
    float matriz[2][3][3];
    float matrizSuma[3][3];
    int m, fila, columna;
    system("cls"); system("color f5");

    // Pedimos los datos de las dos matrices
    for (m = 0; m < 2; m++)
        for (fila = 0; fila < 3; fila++)
            for (columna = 0; columna < 3; columna++)
            {
                cout << "En la matriz " << m + 1
                    << ", dime el dato de la fila " << fila + 1
                    << " y la columna " << columna + 1 << ": ";
                cin >> matriz[m][fila][columna];
            }

    // Calculamos la suma
    for (fila = 0; fila < 3; fila++)
        for (columna = 0; columna < 3; columna++)
            matrizSuma[fila][columna] = matriz[0][fila][columna]
            + matriz[1][fila][columna];


    // Y mostramos el resultado 
    cout << "La matriz suma es " << endl;
    for (fila = 0; fila < 3; fila++)
    {
        for (columna = 0; columna < 3; columna++)
            cout << matrizSuma[fila][columna] << " ";
        cout << endl;
    }

    _getch();
}

void Multiplcacion()
{
    system("cls"); system("color f4");
    int A[20][20], B[20][20], C[20][20];
    int k, m, n;

    cout << "Lectura de matriz A." << endl;
    cout << "Filas de A: "; cin >> k;
    cout << "Columnas de A: "; cin >> m;
    cout << endl;
    for (int i = 0; i < k; ++i)
        for (int j = 0; j < m; ++j)
        {
            cout << "Ingrese valor para A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }

    cout << "Lectura de matriz B." << endl;
    cout << "Filas de B: " << m << " (ya esta definido y es necesario)." << endl;
    cout << "Columnas de B: "; cin >> n;
    cout << endl;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
        {
            cout << "Ingrese valor para B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }

    // Inicializamos la matriz C.
    for (int i = 0; i < k; ++i)
        for (int j = 0; j < n; ++j)
            C[i][j] = 0;

    // Generamos la matriz C.
    for (int i = 0; i < k; ++i)
        for (int j = 0; j < n; ++j)
            for (int z = 0; z < m; ++z)
                C[i][j] += A[i][z] * B[z][j];

    cout << "Matriz A: ";
    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz B: ";
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matriz C: ";
    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    _getch();
}

void Transpuesta()
{
    system("cls"); system("color f3");
    int matrizA[3][3], matrizB[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Ingresar datos de matriz [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matrizA[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizB[i][j] = matrizA[j][i];
        }
    }
    std::cout << "\nMATRIZ A\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrizA[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n\nMATRIZ B\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << matrizB[i][j] << " ";
        }
        std::cout << "\n";
    }
    system("pause");
    _getch();
}

void main() {
    do
    {
        system("cls");
        menu();
        switch (pl)
        {
        case 1: Suma(); break;
        case 2: Multiplcacion(); break;
        case 3: Transpuesta(); break;
        }
    } while (pl != 4);
}