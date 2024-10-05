/*	utils.h	*/

#ifndef UTILS_H
# define UTILS_H

int getDotIndex(const char* str);
int countDots(const char* str);
void convertToDouble(const char* str);
void convertToFloat(const char* str);
void printImpossibleConversion();
void printChar(char c);
void printInt(int num);
void printFloat(float num, int num_decimal_digits);
void printDouble(double num, int num_decimal_digits);

#endif
