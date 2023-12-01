# NOTICE - READ ME!
This library is not maintained by me anymore. It's fairly complete, however there are much better options than mine. I will not help with fixing any code, however you can freely fork it and fix anything you want. You can do whatever you want with the code, as I don't really care about it at all.

# termcol
A simple and fast free-to-use cross-platform C++ library for colored text in the terminal.
This library does not fully support Windows. Do **not** expect it to work.

## How it works
termcol uses escape codes to change text colors. It also automatically changes the text back, so **no manually resetting the text color**!

## Usage
Include the header file in your project and start using it!

See usage in `example.cpp`, or use some references listed below.

To compile the example for seeing a visual representation:

Unix
```sh
clang++ example.cpp -o example -std=c++17 && ./example
```

Windows
```sh
g++ example.cpp -o example.exe -std=c++17 && example.exe
```

You can use the basic functions to print:
```cpp
termcol::text::brightWhite("Hello, World!");
```

Use multiple colors:
```cpp
termcol::text::yellow("two ");
termcol::text::white("colors!\n");
```

Or wrap it in a function:
```cpp
void sayHello(string person)
{
    termcol::text::brightWhite("Hello, ");
    termcol::text::brightRed(person);
    termcol::text::brightWhite("!\n");
}

sayHello("World");
```

You can also use the color builder:
```cpp
//                      text                color             bright   bg
termcol::colorBuilder("Hello!", termcol::TerminalColors::CYAN, true, false)
```
