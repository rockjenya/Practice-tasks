#include <iostream>

void Print_line(char *a, int i = 0);
int counter = 0;
int main()
{
    char line[100];
    std::cout << "\tEnter a line" << std::endl;
    std::cin.getline(line, 100);
    std::cin.get();
    Print_line(line);
    std::cout << "\tAnother start func" << std::endl;
    Print_line(line, 1);
    std::cout << "\tAnd again" << std::endl;
    Print_line(line, 10510);
    std::cout << "\tThe last one" << std::endl;
    Print_line(line, 2);
    return 0;
}

void Print_line(char *a, int i)
{
    
    if(i>0)
    {
        for(int j = 0; j < counter; j++)
            std::cout<< a << std::endl;
    }
    else
        std::cout << a << std::endl;
    counter++;
}