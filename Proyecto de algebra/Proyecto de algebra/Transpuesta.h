void Transpuesta()
{
    system("cls"); system("color f4");
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
