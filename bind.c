#include "libmypy.h"

char hellofunc_docs[] = "Hello world description.";

PyMethodDef helloworld_funcs[] = {
	{	"hello",
		(PyCFunction)hello,
		METH_NOARGS,
		hellofunc_docs},
	{	NULL}
};

struct PyModuleDef helloworld_mod = {
	PyModuleDef_HEAD_INIT,
	"helloworld",
	"This is hello world module.",
	-1,
	helloworld_funcs,
	NULL,
	NULL,
	NULL,
	NULL
};

void PyInit_helloworld(void) {
	PyModule_Create(&helloworld_mod);
}
