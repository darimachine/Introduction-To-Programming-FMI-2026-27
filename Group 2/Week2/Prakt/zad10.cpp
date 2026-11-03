#include <iostream>

int main() {

    int numerator_a, numerator_c;
    int denominator_b, denominator_d;
    char division_operator_a, division_operator_b;  

    int LCM, GCD;

    // Валидиране
    bool valid_input = 0;
    while(!valid_input) {
       std::cin >> numerator_a >> division_operator_a >> denominator_b
                >> numerator_c >> division_operator_b >> denominator_d;  
        if(division_operator_a!='/'||division_operator_b!='/') { std::cout << "Невалиден входящ формат [a/b] [c/d] b != 0, d != 0." << std::endl; continue; }
        if(denominator_b==0||denominator_d==0) {std::cout << "Недефинирана дроб със знаменател 0, b != 0, d != 0." << std::endl; continue; }

        valid_input = 1; // Би трябвало да е достъпно само при правилен инпут
    }
    
    if(denominator_b%denominator_d==0) { LCM = denominator_b; }
    else if(denominator_d%denominator_b) { LCM = denominator_d; }

    // Алгоритъм на Евклид
    // А > В
    // А % В = С
    // ако В % С == 0, НОД на А и В е С, 
    // ако не, същата стъпка се повтаря със остатъка В % С и по-малкото число от В и С.
    // 1054 % 132 = 1054-924 = 130
    //   A     B       C
    // 132 % 130 = 2
    //  B     C 
    // 130 % 2 = 0
    // GCD = 2;
    int temp = 1, B = 1;
    if(denominator_b>denominator_d) { GCD = denominator_b%denominator_d; B = denominator_d; } else { GCD = denominator_d%denominator_b; B = denominator_b; }
    while(GCD % B) {
        if(B>GCD) { temp = GCD; GCD = B % GCD; B = temp; }
        else { temp = GCD; GCD = GCD % B; B = temp; }
    }
    GCD = temp;

    LCM = denominator_b/GCD * denominator_d;
    int numerator_sum = (numerator_a*(LCM/denominator_b))+(numerator_c*(LCM/denominator_d)); 

    if(numerator_sum%LCM==0) { std::cout << numerator_sum/LCM << std::endl; return 0;}
    if(numerator_sum > LCM) { std::cout << numerator_sum/LCM << "+";}
    numerator_sum -= LCM;

    std::cout << numerator_sum << "/" << LCM << std::endl; 

    return 0;
}