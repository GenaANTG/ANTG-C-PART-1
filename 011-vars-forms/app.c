int func_three();
int func_four();

int main()
{
    /* Объявление и инициализация с помощью литерала */
    int v1 = 1;
    int v2 = 2;

    /* Объявление и инициализация с помощью выражений */
    int v3 = func_three();
    int v4 = func_four();
    int v7 = v3 + v4;

    /* Потенциально могут хранить мусор */
    // int v5, v6, v7;

    int a = 0, b = 0, c = 0;

    return 0;
}

int func_three()
{
    return 3;
}

int func_four()
{
    return 4;
}