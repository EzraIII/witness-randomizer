#pragma once
#include <memory>
#include <vector>

class Memory;

enum Type {
    Stone =      0x100,
    Square = Stone, // @Deprecated
    Star =       0x200,
    Poly =       0x400,
    Eraser =     0x500,
    Nega = Eraser, // @Deprecated
    Triangle =   0x600,
    RPoly =     0x1000, // @Cleanup!
    Ylop =      0x2000,
};

enum Color {
    Black =     0x1,
    White =     0x2,
    Gray =      0x3,
    Purple =    0x4,
    Green =     0x5,
    Cyan =      0x6,
    Pink =      0x7,
    Yellow =    0x8,
    Blue =      0x9,
    Orange =    0xA,
};

struct Decoration {
    Type type;
    Color color;
    int polyshape = 0;
    // For triangles only
    int count = 0;
};

struct Cell {
    inline static Cell Undefined() {
        Cell c;
        c.undefined = true;
        return c;
    }
    bool undefined = false;

    bool start = false;
    enum class Dir {NONE, LEFT, RIGHT, UP, DOWN};
    Dir end = Dir::NONE;
    std::shared_ptr<Decoration> decoration = nullptr;
    enum class Dot {NONE, BLACK, BLUE, YELLOW, INVISIBLE};
    Dot dot = Dot::NONE;
    enum class Gap {NONE, BREAK, FULL};
    Gap gap = Gap::NONE;

    // Line color
    enum class Color {NONE, BLACK, BLUE, YELLOW};
    Color color = Color::NONE;
};

struct Negation {};
struct Pos {int x; int y;};

class Puzzle {
public:
    int16_t height;
    int16_t width;
    bool hasDecorations = false;

    enum class Symmetry {NONE, X, Y, XY};
    Symmetry sym = Symmetry::NONE;
    bool pillar = false;

    bool valid;
    std::vector<Negation> negations;
    std::vector<Pos> invalidElements;

    inline Cell GetCell(int x, int y) const;
    inline Cell::Color GetLine(int x, int y) const;
    inline void NewGrid(int newWidth, int newHeight);

    // @TODO:
    Pos GetSymmetricalPos(int x, int y);

// private:
    std::vector<std::vector<Cell>> grid;

private:
    inline int Mod(int x) const;
    inline bool SafeCell(int x, int y) const;
};
