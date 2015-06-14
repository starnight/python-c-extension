#include <Python.h>
#include "libmypy.h"

PyObject * hello(PyObject * self) {
	return PyUnicode_FromFormat("Hello C extension!");
}

PyObject * heyman(PyObject *self, PyObject *args) {
	int num;
	char *name;

	if(!PyArg_ParseTuple(args, "is", &num, &name))
		return NULL;

	return PyUnicode_FromFormat("Hay %s!  You gave me %d.", name, num);
}
