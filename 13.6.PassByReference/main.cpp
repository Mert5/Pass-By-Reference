#include <iostream>

// REFERENCE => https://www.youtube.com/watch?v=8jLOx1hD3_o

void say_age(int &age);

int main(){

    int age {35};
    
    std::cout << "Your age, before function call is : " << age << ", and the address is : " << &age << std::endl;
    say_age(age);
    std::cout << "Your age, after function call is : " << age << ", and the address is : " << &age << std::endl;

    return 0;
}

void say_age(int &age){
    age++;      // in function body, you do not have to make dereferencing
    std::cout << "Your age in function is : " << age << ", and the address is : " << &age << std::endl;   
}
