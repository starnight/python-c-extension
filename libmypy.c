#include <Python.h>
#include "libmypy.h"

PyObject * hello(PyObject * self) {
	return PyUnicode_FromFormat("Hello C extension!");
}
