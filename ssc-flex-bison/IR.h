#ifndef IR_H
#define IR_H

#include <stdio.h>
#include <string.h>
#include <map>
#include <vector>
#include <stdexcept>

// This is symbol table data structure.
static std::map<std::string, double> symbolTable;
static std::map<std::string, std::vector<double>> arrayTable;

double performBinaryOperation(double lhs, double rhs, int op) {
    switch(op) {
        case '+':
            return lhs + rhs;
        case '-':
            return lhs - rhs;
        case '*':
            return lhs * rhs;
        case '/':
            return lhs / rhs;
        default:
            return 0;
    }
}

void print(const char* format, const char* value) {
    printf(format, value);
}

void print(const char* format, double value) {
    printf(format, value);
}

void setValueInSymbolTable(const char* id, double value) {
    std::string name(id);
    symbolTable[name] = value;
}

double getValueFromSymbolTable(const char* id) {
    std::string name(id);
    if (symbolTable.find(name) != symbolTable.end()) {
        return symbolTable[name];
    }
    return 0; // this is the default value for an identifier.
}

// New functions for array support

void createArray(const char* id, int size) {
    std::string name(id);
    arrayTable[name] = std::vector<double>(size, 0.0);
}

double getArrayElement(const char* id, double index) {
    std::string name(id);
    int idx = static_cast<int>(index);
    if (arrayTable.find(name) != arrayTable.end()) {
        if (idx >= 0 && idx < arrayTable[name].size()) {
            return arrayTable[name][idx];
        } else {
            throw std::out_of_range("Array index out of bounds");
        }
    }
    throw std::runtime_error("Array not found");
}

void setArrayElement(const char* id, double index, double value) {
    std::string name(id);
    int idx = static_cast<int>(index);
    if (arrayTable.find(name) != arrayTable.end()) {
        if (idx >= 0 && idx < arrayTable[name].size()) {
            arrayTable[name][idx] = value;
        } else {
            throw std::out_of_range("Array index out of bounds");
        }
    } else {
        throw std::runtime_error("Array not found");
    }
}

#endif // IR_H