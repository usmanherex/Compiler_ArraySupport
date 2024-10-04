#ifndef IR_H
#define IR_H

#include <stdio.h>
#include <string.h>
#include <map>
#include <vector>
#include <stdexcept>
#include <numeric>   
#include <algorithm>   
#include <sstream>
#include <iomanip>

// Symbol tables
static std::map<std::string, double> doubleSymbolTable;
static std::map<std::string, std::string> stringSymbolTable;
static std::map<std::string, std::vector<double>> arrayTable;
static std::map<std::string, std::vector<std::vector<double>>> arrayTable2D;
static std::map<std::string, std::string> stringTable;

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

void setValueInSymbolTable(const char* id, double value) {
    doubleSymbolTable[std::string(id)] = value;
}

void setValueInSymbolTable(const char* id, const char* value) {
    stringSymbolTable[std::string(id)] = std::string(value);
}

double getDoubleFromSymbolTable(const char* id) {
    std::string name(id);
    if (doubleSymbolTable.find(name) != doubleSymbolTable.end()) {
        return doubleSymbolTable[name];
    }
    return 0; // Default value for a double identifier
}

const char* getStringFromSymbolTable(const char* id) {
    std::string name(id);
    if (stringSymbolTable.find(name) != stringSymbolTable.end()) {
        return stringSymbolTable[name].c_str();
    }
    return ""; // Default value for a string identifier
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



double sumArray(const char* id) {
    std::string name(id);
    if (arrayTable.find(name) != arrayTable.end()) {
        return std::accumulate(arrayTable[name].begin(), arrayTable[name].end(), 0.0);
    }
    throw std::runtime_error("Array not found");
}

double minArray(const char* id) {
    std::string name(id);
    if (arrayTable.find(name) != arrayTable.end()) {
        return *std::min_element(arrayTable[name].begin(), arrayTable[name].end());
    }
    throw std::runtime_error("Array not found");
}

double maxArray(const char* id) {
    std::string name(id);
    if (arrayTable.find(name) != arrayTable.end()) {
        return *std::max_element(arrayTable[name].begin(), arrayTable[name].end());
    }
    throw std::runtime_error("Array not found");
}

double avgArray(const char* id) {
    std::string name(id);
    if (arrayTable.find(name) != arrayTable.end()) {
        double sum = std::accumulate(arrayTable[name].begin(), arrayTable[name].end(), 0.0);
        return sum / arrayTable[name].size();
    }
    throw std::runtime_error("Array not found");
}




// Modify the serializeArray function to return const char*
const char* serializeArray(const char* id) {
    std::string name(id);
    if (arrayTable.find(name) != arrayTable.end()) {
        std::ostringstream oss;
        oss << "[";
        for (size_t i = 0; i < arrayTable[name].size(); ++i) {
            if (i > 0) oss << ",";
            oss << std::fixed << std::setprecision(6) << arrayTable[name][i];
        }
        oss << "]";
        // Store the result in the stringTable and return it
        stringTable[name + "_serialized"] = oss.str();
        return stringTable[name + "_serialized"].c_str();
    }
    throw std::runtime_error("Array not found");
}

// Deserialize a JSON-like string to an array
void deserializeArray(const char* id, const char* json) {
    std::string name(id);
    std::string jsonStr(json);
    std::vector<double> values;
    
    size_t start = jsonStr.find('[');
    size_t end = jsonStr.find(']');
    if (start == std::string::npos || end == std::string::npos) {
        throw std::runtime_error("Invalid JSON format");
    }
    
    std::string content = jsonStr.substr(start + 1, end - start - 1);
    std::istringstream iss(content);
    std::string token;
    while (std::getline(iss, token, ',')) {
        values.push_back(std::stod(token));
    }
    
    arrayTable[name] = values;
}

#endif // IR_H