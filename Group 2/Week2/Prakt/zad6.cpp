#include <iostream>

int main() {

    int range;

    bool valid_input = 0;
    while(!valid_input) {
        std::cin >> range; 

        if(range < 2 || range > 10000) { std::cout << "Грешка. Въведи входяща стойност в интервала [2, 10 000]: " << std::endl; continue; }

        valid_input = 1;
    }

    if(range <= 4) { std::cout << 2 << " " << 3 << std::endl; return 0; }

    std::cout << 2 << " " << 3 << " ";

    // Как работи алгоритъма: простите числа винаги са във формата n*6 +- 1,
    // но понякога се получават числа от тази формула които са делими на други числа,
    // които се оказва че също са предимно прости числа. Затова проверяваме дали
    // това е вярно за нашите две числа n*6 - 1 и n*6 + 1. Обаче проверяваме само до 
    // квадратният корен на нашето число, защото ако до този момент не открием негов делител, то
    // и числото ни няма такъв. Това е сравнително известен алгоритъм (мисля).
    
    for(int i = 6; i <= range; i+=6 ) {
        int lpivot = i-1; //n6 - 1
        int rpivot = i+1; // n6 + 1
        
        // По същия начин проверява дали числото не се дели на други естествени числа
        bool l_is_prime = 1;
        bool r_is_prime = 1;
        for(int k = 5; k * k <= lpivot; k += 6) {
            if(!(lpivot % k) || !(lpivot % (k + 2))) { l_is_prime = 0; }
        }
        for(int k = 5; k * k <= rpivot; k += 6) {
            if(!(rpivot % k) || !(rpivot % (k + 2))) { r_is_prime = 0; }
        } 

        if(l_is_prime) { std::cout << lpivot << " "; }
        if(r_is_prime) { std::cout << rpivot << " "; }
    }
    std::cout << std::endl;
    return 0;
}