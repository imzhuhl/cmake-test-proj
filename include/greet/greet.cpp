#include "greet.h"

using namespace std;

string greeting(string& name) {
    string gt {"hello, " + name};
    return gt;
}
