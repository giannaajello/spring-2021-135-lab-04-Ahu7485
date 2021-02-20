#include "funcs.h"

std::string box(int width, int height){
    for(int i = 0; i < height; ++i){
        for(int x = 0; x < width; ++x){
            std::cout << '*';
        }
        std::cout << "\n";
    }
    return "";
}

std::string checkerboard(int width, int height){
    char dot = '*';
    char blank = ' ';
    for(int h = 1; h <= height; h++){
        for(int w = 1; w <= width; w++){
            //add * if height or width is odd
            if((h%2 == 0 && w%2 == 0) || (h%2 == 1 && w%2 == 1)){
                std::cout << dot;
            }else{
                std::cout << blank;
            }
        }
        std::cout << "\n";
    }
    return "";
}

std::string cross(int size){
    char dot = '*';
    char blank = ' ';
    //top half
    for(int i = 0; i < size/2; i++){
        for(int spaces = 0; spaces < i ; spaces++){
            std::cout << blank;
        }
        std::cout << dot;
        for(int spaces = 0; spaces<(((size-2)-(i*2))); spaces++){
            std::cout << blank;
        }
        std::cout << dot << '\n';
    }
    //middle if odd
    if(size%2 == 1){
        for(int i = 0; i < size/2;i++){
            std::cout << blank;
        }
        std::cout << dot << "\n";
    }
    //bottom half
    for(int i = size/2; i >0; i--){
        for(int spaces = 0; spaces < i-1 ; spaces++){
            std::cout << blank;
        }
        std::cout << dot;
        for(int spaces = 0; spaces < ((size) - (i*2)) ; spaces++){
            std::cout << blank;
        }
        std::cout << dot << '\n';
    }
    return "";
}

std::string lower(int side_length){
    char dot = '*';
    char blank = ' ';
    int column = 1;
    for(int i = 0; i < side_length; i++){
        for(int x = 0;  x < column ; x++){
            std::cout << dot;
        }
        std::cout << '\n';
        column++;
    }
    return "";
}
std::string upper(int side_length){
    char dot = '*';
    char blank = ' ';
    int column = 0;
    for(int i = 0; i < side_length; i++){
        for(int x = 0;  x < column ; x++){
            std::cout << blank;
        }
        for (int x2 = 0; x2 < (side_length - i); x2++){
            std::cout << dot;
        }
        std::cout << '\n';
        column++;
    }
    return "";
}
std::string trapezoid(int width, int height){
    if (width < (2*height)){
        std::cout << "Impossible Shape \n";
    }else{
        char dot = '*';
        char blank = ' ';
        int column = width;
        int spaces = 0;
        for(int i = 0; i < height; i++){
            for(int x = 0; x < spaces; x++){
                std::cout << blank;
            }
            for(int x = 0; x < column; x++){
                std::cout << dot;
            }
            std::cout << '\n';
            column -=2;
            spaces++;
        }

    }
    return "";
}
std::string checkerboard3x3(int width, int height){
    char dot = '*';
    char blank = ' ';
    for(int l = 0; l < height; l++){
        for(int w = 0; w < width ; w++){
            if (((l/3)%2==0 && (w/3)%2 == 0) || ((l/3)%2==1 && (w/3)%2 == 1)){
                std::cout << dot;
            }else {
                std::cout << blank;
            }
        }
        std::cout << '\n';
    }
    return "";
}