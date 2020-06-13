int func3()
{
    return 0;
}

int func2()
{
    func3();
    return 0;
}

int func1()
{
    func2();
    return 0;
}

int main()
{
    func1();
    return 0;
}