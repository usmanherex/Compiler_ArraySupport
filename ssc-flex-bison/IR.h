#ifndef IR_H
#define IR_H

#include <stdio.h>
#include <string.h>
#include <map>
#include <vector>
#include <stdexcept>

// DynamicArray class definition
template<typename T>
class DynamicArray {
private:
    std::vector<T> data;

public:
    DynamicArray() = default;

    void Add(const T& element) {
        data.push_back(element);
    }

    void Resize(size_t newSize) {
        data.resize(newSize);
    }

    T& operator[](size_t index) {
        if (index >= data.size()) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    const T& operator[](size_t index) const {
        if (index >= data.size()) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    size_t Size() const {
        return data.size();
    }
};

// Symbol tables
static std::map<std::string, double> symbolTable;
static std::map<std::string, DynamicArray<double>> arrayTable;
static std::map<std::string, DynamicArray<DynamicArray<double>>> arrayTable2D;

// Binary operation for arithmetic expressions
double performBinaryOperation(double lhs, double rhs, int op) {
    switch(op) {
        case '+': return lhs + rhs;
        case '-': return lhs - rhs;
        case '*': return lhs * rhs;
        case '/': return lhs / rhs;
        default: return 0;
    }
}

// Print functions
void print(const char* format, const char* value) {
    printf(format, value);
}

void print(const char* format, double value) {
    printf(format, value);
}

// Symbol Table functions for variables
void setValueInSymbolTable(const char* id, double value) {
    symbolTable[std::string(id)] = value;
}

double getValueFromSymbolTable(const char* id) {
    std::string name(id);
    if (symbolTable.find(name) != symbolTable.end()) {
        return symbolTable[name];
    }
    return 0; // Default value for an identifier
}

// 1D Array functions
void createArray(const char* id, int size) {
    std::string name(id);
    arrayTable[name] = DynamicArray<double>();
    arrayTable[name].Resize(size);
}

double getArrayElement(const char* id, double index) {
    std::string name(id);
    int idx = static_cast<int>(index);
    if (arrayTable.find(name) != arrayTable.end()) {
        return arrayTable[name][idx];
    }
    throw std::runtime_error("Array not found");
}

void setArrayElement(const char* id, double index, double value) {
    std::string name(id);
    int idx = static_cast<int>(index);
    if (arrayTable.find(name) != arrayTable.end()) {
        arrayTable[name][idx] = value;
    } else {
        throw std::runtime_error("Array not found");
    }
}

// Dynamic Array operations
void addToArray(const char* id, double value) {
    std::string name(id);
    if (arrayTable.find(name) != arrayTable.end()) {
        arrayTable[name].Add(value);
    } else {
        throw std::runtime_error("Array not found");
    }
}

void resizeArray(const char* id, int newSize) {
    std::string name(id);
    if (arrayTable.find(name) != arrayTable.end()) {
        arrayTable[name].Resize(newSize);
    } else {
        throw std::runtime_error("Array not found");
    }
}

// 2D Array functions
void create2DArray(const char* id, int rows, int cols) {
    std::string name(id);
    arrayTable2D[name] = DynamicArray<DynamicArray<double>>();
    arrayTable2D[name].Resize(rows);
    for (int i = 0; i < rows; ++i) {
        arrayTable2D[name][i].Resize(cols);
    }
}

double get2DArrayElement(const char* id, double row, double col) {
    std::string name(id);
    int rowIdx = static_cast<int>(row);
    int colIdx = static_cast<int>(col);
    if (arrayTable2D.find(name) != arrayTable2D.end()) {
        return arrayTable2D[name][rowIdx][colIdx];
    }
    throw std::runtime_error("2D Array not found");
}

void set2DArrayElement(const char* id, double row, double col, double value) {
    std::string name(id);
    int rowIdx = static_cast<int>(row);
    int colIdx = static_cast<int>(col);
    if (arrayTable2D.find(name) != arrayTable2D.end()) {
        arrayTable2D[name][rowIdx][colIdx] = value;
    } else {
        throw std::runtime_error("2D Array not found");
    }
}

#endif // IR_H