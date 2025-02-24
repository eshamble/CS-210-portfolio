# CS-210-portfolio

Project 3 - 

Documentation for this project's functionality is in Project 3 Documentation.docx.

This project is a tool to analyze an input file with a list of words. It counts the frequency of each word, outputs each word and its frequency to a .dat file, and the user can find the frequency for any given word, and get the list of frequencies, and a histogram of the frequencies.

I was able to do everything that was in the requirements. I think my code was easy enough to understand, and I did my best to have plenty of inline comments.

I used a map and it worked fine, but I think a 2D vector could have worked fine as well. The benefit would be that there would be no duplicate data. In my code, I used a vector to keep track of all of the keys, creating duplicate strings. Additionally, I did not choose to implement user input validation. If I were to work on this project more, I would focus on that. The format in the output was messy as well, with no space after the lists given before the menu is listed again. An easy fix for that would just be adding another endl, but ideally I would want to prompt the user for input again before displaying the menu. It would be a more user friendly project that way.

The biggest challenge I had in this project was that I forgot to put using namespace std in my header file, which created a headache for a while. I used a lot of Google searching to troubleshoot the problem, because the error messages were only confusing me. The map+vector implementation was conceptually more challenging, but I was already comfortable with both maps and vectors.

File handling, I/O, classes, vectors, and maps in C++ are all very useful and transferrable skills. I was referencing on work from previous assignments for I/O, file handling, and classes, and I will be able to reference this project in the future for the same things.

Inline comments helped with readability, and I created a function that does file input and output with a file name given in the function call, so the file name for the input would be able to be swapped out pretty easily. I could separate the function into separate input and output functions though, but that wouldn't be too difficult.
