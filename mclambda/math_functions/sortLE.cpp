// Include Files
#include "rt_nonfinite.h"
#include "..\mclambda.h"
#include "sortLE.h"

// --------------------------------------------------------------------------
boolean_T sortLE(const emxArray_real_T *v, const int col_data[], const int
                 col_size[2], int irow1, int irow2)
{
  boolean_T p;
  int k;
  boolean_T exitg1;
  int coloffset;
  boolean_T b0;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= col_size[1] - 1)) {
    coloffset = (col_data[k] - 1) * v->size[0] - 1;
    if ((v->data[coloffset + irow1] == v->data[coloffset + irow2]) || (rtIsNaN
         (v->data[coloffset + irow1]) && rtIsNaN(v->data[coloffset + irow2]))) {
      b0 = true;
    } else {
      b0 = false;
    }

    if (!b0) {
      if ((v->data[coloffset + irow1] <= v->data[coloffset + irow2]) || rtIsNaN
          (v->data[coloffset + irow2])) {
        p = true;
      } else {
        p = false;
      }

      exitg1 = true;
    } else {
      k++;
    }
  }

  return p;
}
// --------------------------------------------------------------------------
