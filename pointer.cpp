#include <iostream>
int main(){
    int a = 10;  
    // normal integer variable 'a'
    // isme value 10 store hai
    int* p = &a;  
    // pointer 'p' banaya
    // p ke andar 'a' ka address store hai
    std::cout << p << std::endl;
    // yeh 'a' ka memory address print karega
    int **newP = &p;  
    // pointer to pointer
    // newP ke andar pointer 'p' ka address store hai
    std::cout << newP << std::endl;
    // yeh 'p' ka memory address print karega
    // -----------------------------
    // Dereference operator (*)
    // -----------------------------
    std::cout << *(&newP) << std::endl;
    // &newP → newP ka address
    // *(&newP) → wapas newP mil jata hai
    // output → p ka address
    std::cout << *newP << std::endl;
    // newP ke andar p ka address hai
    // *newP → p mil jata hai
    // output → a ka address
    std::cout << **newP << std::endl;
    // pehla * → p
    // dusra * → p jis variable ko point karta hai (a)
    // output → 10
    std::cout << *p << std::endl;
    // p a ko point karta hai
    // *p → a ki value
    // output → 10
}