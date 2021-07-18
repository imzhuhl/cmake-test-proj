#ifndef MYLIB_ZHLMATH_VEC_PROD_H_
#define MYLIB_ZHLMATH_VEC_PROD_H_

namespace zhlmath {

template <typename Tp_>
Tp_ vec_inner_product(Tp_* a, Tp_* b, unsigned size) {
    Tp_ v {};
    for (unsigned i = 0; i < size; ++i) {
        v += a[i] * b[i];
    }
    return v;
}



}

#endif