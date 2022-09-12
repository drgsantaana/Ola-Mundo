#include <iostream>
#include <clocale>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    std::cout << "Olá, mundo!" << std::endl;
    system("pause");

    return 0;
}