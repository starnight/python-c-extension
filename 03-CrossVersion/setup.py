#!/usr/bin/env python

from setuptools import setup, Extension

setup(
	name = "helloworld",
	version = "1.0",
	ext_modules = [Extension("helloworld", ["bind.c", "libmypy.c"])]
	)
