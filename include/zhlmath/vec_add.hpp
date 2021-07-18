#ifndef MYLIB_ZHLMATH_VEC_ADD_H_
#define MYLIB_ZHLMATH_VEC_ADD_H_

namespace zhlmath {


template <typename Tp_>
void vec_add(Tp_* a, Tp_* b, Tp_* rst, unsigned size) {
    for (unsigned i = 0; i < size; ++i) {
        rst[i] = a[i] + b[i];
    }
}



}

#endif
