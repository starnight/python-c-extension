#!/usr/bin/env python

import platform

print("This is Python " + platform.python_version());

import helloworld

print(helloworld.hello());
print(helloworld.heyman(5, "StarNight"));
print(helloworld.add(5, 6));
help(helloworld);
