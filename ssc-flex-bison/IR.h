#ifndef IR_H
#define IR_H

#include <stdio.h>
#include <string.h>
#include <map>
#include <vector>
#include <stdexcept>

// Symbol tables
static std::map<std::string, double> symbolTable;
static std::map<std::string, std::vector<double>> arrayTable;
static std::map<std::string, std::vector<std::vector<double>>> arrayTable2D;

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
    arrayTable[name] = std::vector<double>(size);
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
        arrayTable[name].push_back(value);
    } else {
        throw std::runtime_error("Array not found");
    }
}

void resizeArray(const char* id, int newSize) {
    std::string name(id);
    if (arrayTable.find(name) != arrayTable.end()) {
        arrayTable[name].resize(newSize);
    } else {
        throw std::runtime_error("Array not found");
    }
}

// 2D Array functions
void create2DArray(const char* id, int rows, int cols) {
    std::string name(id);
    arrayTable2D[name] = std::vector<std::vector<double>>(rows, std::vector<double>(cols));
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
        if (rowIdx >= 0 && rowIdx < arrayTable2D[name].size()) {
            if (colIdx >= 0 && colIdx < arrayTable2D[name][rowIdx].size()) {
                arrayTable2D[name][rowIdx][colIdx] = value;
            } else {
                throw std::out_of_range("Column index out of bounds");
            }
        } else {
            throw std::out_of_range("Row index out of bounds");
        }
    } else {
        throw std::runtime_error("Array not found");
    }
}

// Array Slicing for 1D arrays
std::vector<double> sliceArray(const char* id, int start, int end) {
    std::string name(id);
    if (arrayTable.find(name) != arrayTable.end()) {
        if (start >= 0 && end <= arrayTable[name].size() && start <= end) {
            return std::vector<double>(arrayTable[name].begin() + start, arrayTable[name].begin() + end);
        } else {
            throw std::out_of_range("Invalid slice indices");
        }
    }
    throw std::runtime_error("Array not found");
}

// Array Slicing for 2D arrays
std::vector<std::vector<double>> slice2DArray(const char* id, int rowStart, int rowEnd, int colStart, int colEnd) {
    std::string name(id);
    if (arrayTable2D.find(name) != arrayTable2D.end()) {
        if (rowStart >= 0 && rowEnd <= arrayTable2D[name].size() && rowStart <= rowEnd) {
            std::vector<std::vector<double>> slicedArray;
            for (int i = rowStart; i < rowEnd; ++i) {
                if (colStart >= 0 && colEnd <= arrayTable2D[name][i].size() && colStart <= colEnd) {
                    slicedArray.push_back(std::vector<double>(arrayTable2D[name][i].begin() + colStart, arrayTable2D[name][i].begin() + colEnd));
                } else {
                    throw std::out_of_range("Invalid column slice indices");
                }
            }
            return slicedArray;
        } else {
            throw std::out_of_range("Invalid row slice indices");
        }
    }
    throw std::runtime_error("2D Array not found");
}

// Utility function to create a slice1D (single-dimensional array)
std::vector<double> slice1D(const char* arrayName, const char* newArrayName, int startIdx, int endIdx) {
    std::vector<double> slicedArray = sliceArray(arrayName, startIdx, endIdx);
    arrayTable[std::string(newArrayName)] = slicedArray; // Store the sliced array into the new array
    return slicedArray;
}

// Utility function to create a slice2D (two-dimensional array)
std::vector<std::vector<double>> slice2D(const char* arrayName, const char* newArrayName, int rowStartIdx, int rowEndIdx, int colStartIdx, int colEndIdx) {
    std::vector<std::vector<double>> slicedArray = slice2DArray(arrayName, rowStartIdx, rowEndIdx, colStartIdx, colEndIdx);
    arrayTable2D[std::string(newArrayName)] = slicedArray; // Store the sliced 2D array into the new array
    return slicedArray;
}

#endif // IR_H