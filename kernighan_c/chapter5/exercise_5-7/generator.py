#!/usr/bin/python

import string
import random

def random_generator(size=1000, chars=string.ascii_uppercase + string.digits):
    return ''.join(random.choice(chars) for x in range(size))


for x in range(0,1000000):
    print random_generator()
