

int main()
{   
    init();

    gets(test);
    gets(bet);
    
    int inp = action();
    if (inp == 1)
    {
        move();
    }

    while (inp == 1)
    {
        action();
    }
}