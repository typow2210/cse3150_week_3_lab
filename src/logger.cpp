#include "logger.h"
#include <string>
#include <iostream>

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
    // TODO: throw "Full" if size == capacity, else insert and ++size
    if (size == capacity){
	    throw std::string("Full");
    }
    else{
	    labels[size] = label;
	    values[size] = value; 
	    size++;
    }


}

void updateValue(double* valuePtr, double newValue) {
    // TODO: write through pointer
    *valuePtr = newValue; 
}

void printReading(const std::string& label, const double& value) {
    // TODO: pretty-print one reading
    std::cout << label << ": " << value << std::endl; 
}

double average(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute average
    if (size == 0){
	    throw std::string("Empty");
    }
    double avg = 0.0; 
    for(int i = 0; i < size; i++){
	    avg += values[i]; 
    }
    double size2 = static_cast<double>(size); 
    return (avg / size);
}

double minValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute min
    if (size == 0){
	    throw std::string("Empty"); 
    }
    double min = values[0]; 
    for (int i = 1; i < size; i++){
	    if (values[i] <= min){
		    min = values[i]; 
	    }
    }
    return min; 
}

double maxValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute max
    if (size == 0){
            throw std::string("Empty");
    }
    double max = values[0];
    for (int i = 1; i < size; i++){
            if (values[i] >= max){
                    max = values[i];
            }
    }
    return max;
}
