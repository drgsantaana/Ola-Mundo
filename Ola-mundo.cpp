#include <iostream>
#include <clocale>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    
    std::cout << "Ol�, mundo!" << std::endl;
    system("pause");

    return 0;
}