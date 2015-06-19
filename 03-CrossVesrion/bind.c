#include "libmypy.h"

char hellofunc_docs[] = "Hello world description.";
char heymanfunc_docs[] = "Echo your name and passed number.";
char addfunc_docs[] = "Add two numbers function.";

PyMethodDef helloworld_funcs[] = {
	{	"hello",
		(PyCFunction)hello,
		METH_NOARGS,
		hellofunc_docs},
	{	"heyman",
		(PyCFunction)heyman,
		METH_VARARGS,
		heymanfunc_docs},
	{	"add",
		(PyCFunction)add,
		METH_VARARGS,
		addfunc_docs},

	{	NULL}
};

char helloworldmod_docs[] = "This is hello world module.";
char helloworldmod_name[] = "helloworld";

#if PY_MAJOR_VERSION >= 3

PyModuleDef helloworld_mod = {
	PyModuleDef_HEAD_INIT,
	helloworldmod_name,
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

#else

void inithelloworld(void) {
	Py_InitModule3(helloworldmod_name, helloworld_funcs, helloworldmod_docs);
}

#endif
