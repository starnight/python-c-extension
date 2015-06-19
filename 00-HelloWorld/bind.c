#include "libmypy.h"

char hellofunc_docs[] = "Hello world description.";

PyMethodDef helloworld_funcs[] = {
	{	"hello",
		(PyCFunction)hello,
		METH_NOARGS,
		hellofunc_docs},
	{	NULL}
};

char helloworldmod_docs[] = "This is hello world module.";

PyModuleDef helloworld_mod = {
	PyModuleDef_HEAD_INIT,
	"helloworld",
	helloworldmod_docs,
	-1,
	helloworld_funcs,
	NULL,
	NULL,
	NULL,
	NULL
};

PyMODINIT_FUNC PyInit_helloworld(void) {
	return PyModule_Create(&helloworld_mod);
}
