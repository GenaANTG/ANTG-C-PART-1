int func3()
{
    return 0;
}

int func2()
{
    return func3();
}

int func1()
{
    return func2();
}

int main()
{
    func1();
    return 0;
}