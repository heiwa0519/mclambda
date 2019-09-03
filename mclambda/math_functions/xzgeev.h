#ifndef XZGEEV_H
#define XZGEEV_H

// Include Files
#include <cmath>
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "..\mclambda_types.h"

// Function Declarations
extern void xzgeev(int n, const double A[], int *info, creal_T alpha1[], creal_T beta1[]);

#endif
