#ifndef BLAS_H
#define BLAS_H

void reorg_cpu(float *x, int w, int h, int c, int batch, int stride, int forward, float *out);
void flatten(float *x, int size, int layers, int batch, int forward);
void scal_cpu(int N, float ALPHA, float *X, int INCX);
void fill_cpu(int N, float ALPHA, float * X, int INCX);
void normalize_cpu(float *x, float *mean, float *variance, int batch, int filters, int spatial);
void scale_bias(float *output, float *scales, int batch, int n, int size);
void softmax(float *input, int n, float temp, float *output, int stride);
void axpy_cpu(int N, float ALPHA, float *X, int INCX, float *Y, int INCY);
void copy_cpu(int N, float *X, int INCX, float *Y, int INCY);

#endif
