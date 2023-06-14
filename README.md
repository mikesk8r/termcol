# termcol
A simple and fast free-to-use cross-platform C++ library for colored text in the terminal.

Please note that this library is **not** supported on Windows, it is for \*nix systems **only**. I will eventually create a Windows version.

## How it works
termcol uses escape codes to change text colors. It also automatically changes the text back, so **no manually resetting the text color**!

## Usage
Include the header file in your project and start using it!

See usage in `example.cpp`, or use some references listed below.

To compile the example for seeing a visual representation:
```sh
clang++ example.cpp -o example -std=c++17 && ./example
```

You can use the basic functions to print:
```cpp
Colors::brightWhite("Hello, World!");
```

Use multiple colors:
``cpp
Colors::yellow("two ");
Colors::white("colors!\n");
``

Or wrap it in a function:
```cpp
void sayHello(string person)
{
	Colors::brightWhite("Hello, ");
	Colors::brightRed(person);
	Colors::brightWhite("!\n");
}

sayHello("World");
```

