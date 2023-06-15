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
