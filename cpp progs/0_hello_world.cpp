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

      The "big fuss" about flushing revolves around balancing the need for performance with the 
      requirement for immediate output. In most cases, you should prefer \n for better performance 
      unless you specifically need immediate output, in which case endl or explicit flushing with 
      std::flush becomes essential. Understanding when to use each can help optimize both the user 
      experience and the efficiency of your program.
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
  /*
  Note: 

  To make the process more convenient, there's a shortcut that allows you to include almost all 
  standard libraries at once using #include<bits/stdc++.h>.

  The bits/stdc++.h header is a shortcut that includes a vast number of standard C++ libraries, 
  making it easier to access a wide range of functions and classes without specifying each library 
  individually. It's a time-saving approach for programmers, especially when you need several standard 
  libraries in your code.

  However, it's important to be aware of potential compatibility issues and consider the impact on 
  compile time, especially in large projects. When used judiciously, it can be a valuable asset in 
  streamlining your C++ development process.
  */