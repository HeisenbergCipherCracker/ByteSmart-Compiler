#include <stdlib.h>
#include <stdio.h>
#ifndef SUPPORTLIB_H
#define SUPPORTLIB_H

unsigned char *DoubleArrayToByteArray(double *data, size_t length);
void WriteToFile(ByteArray *data, char *filename);
double *ByteArrayToDoubleArray(unsigned char *data, size_t length);

#endif
