#include <iostream>
int main() {

    int rhomb_width;
    int draw_mode;

    bool valid_input = 0;
    while(!valid_input) {
        std::cout << "Enter the width [1 - 39] of the rhomboid: ";
        std::cin >> rhomb_width;

        if(rhomb_width<1 || rhomb_width>39) { std::cout << "The width of the rhomboid must be between [1 - 39]. " << std::endl; continue; }
        
        valid_input = 1;
    }
    valid_input = 0;
    while(!valid_input) {
        std::cout << "Enter draw mode [0 - fill | 1 - outline]: ";
        std::cin >> draw_mode;

        if(draw_mode!=0 && draw_mode!=1) { std::cout << "The options for the draw mode are [0 - fill | 1 - outline]. " << std::endl; continue; }

        valid_input = 1;
    }
    // Ако беше разрешено това щеше да е във функция като в качествените програми...
    int middle = rhomb_width / 2;
    if(draw_mode==0) { // Fill
        if(rhomb_width%2==0) { // Even height rhomboid
            for(int i = 0; i < rhomb_width; ++i) {
                int offset = (i<=middle) ? (middle - i - 1) : (i - middle);
                for(int k = 0; k < rhomb_width; ++k) {
                    if(k < offset || k>=rhomb_width - offset) {
                        std::cout << ' ';
                    } else {
                        std::cout << '*';
                    }
                }
                std::cout << std::endl;
            }
        } else { // Odd height rhomboid
            for(int i = 0; i < rhomb_width; ++i) {
                int offset = (i <= middle) ? (middle - i) : (i - middle);
                for(int k = 0; k < rhomb_width; ++k) {
                    if(k < offset || k >= rhomb_width - offset) {
                        std::cout << ' ';
                    } else {
                        std::cout << '*';
                    }
                }
            std::cout << std::endl;
            }
        }    
    } else { // Outline 
       if(rhomb_width%2==0) { // Even height rhomboid
            for(int i = 0; i < rhomb_width; ++i) {
                int offset = (i<middle) ? (middle - i - 1) : (i - middle);
                for(int k = 0; k < rhomb_width; ++k) {
                    if(k == offset || k == rhomb_width - 1 - offset) {
                        std::cout << '*';
                    } else {
                        std::cout << ' ';
                    }
                }
                std::cout << std::endl;
            }
        } else { // Odd height rhomboid
            for(int i = 0; i < rhomb_width; ++i) {
                int offset = (i <= middle) ? (middle - i) : (i - middle);
                for(int k = 0; k < rhomb_width; ++k) {
                    if(k == offset || k == rhomb_width - offset - 1) {
                        std::cout << '*';
                    } else {
                        std::cout << ' ';
                    }
                }
            std::cout << std::endl;
            }
        }     
    }
    return 0;
}