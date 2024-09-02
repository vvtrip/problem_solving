#include<iostream>

/*"using namespace std;" is a useful shortcut for simplifying your C++ code, especially 
while writing smaller programs. It helps reduce clutter and makes code more readable. 
However, as the projects grow in complexity, consider using it sparingly 
to avoid potential naming conflicts.*/

int main(){
    /*
      \n is a simple escape sequence that inserts a newline character, 
      which is a low-level operation that directly moves the cursor to the beginning 
      of the next line in the output. On the other hand, std::endl not only adds a newline 
      character but also flushes the output buffer. Flushing the buffer can be a more 
      costly operation in terms of performance, especially when you're printing a large amount of text.
    */

    std::cout << "hello\nworld";
    std::cout << "\nHELLO" <<std::endl;
    std::cout << "WORLD";

    int x;
    std::cout <<"\nEnter number: ";
    std::cin >> x;
    std::cout << "Value of x is "<<x; //prints 0 if string is passed
    return 0;
}