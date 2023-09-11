import numpy
import sys
import matplotlib.pyplot as plt

x = numpy.random.uniform(0, 100, 100000);

plt.hist(x, 100)
plt.show()
