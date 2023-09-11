class Animal():
    def __init__(self, name_, age_, noise_):
        self.name = name_
        self.age = age_
        self.noise = noise_
    def make_noise(self):
        return self.name + " is a generic animal and it makes a " + self.noise

class Cat(Animal):
	# def __init(self, name_, age_, noise_=None):
	# 	# Animal.__init__(name_, age_) # this is valid, but there's a better alternative as shown below
	# 	super().__init__(name_, age_, noise_)
	# 	self.noise = noise_
	def make_noise(self):
		return  self.name + " is know for its " + self.noise

cow = Animal("Generic Animal", 22, 'Moo')
cat = Cat('kitty', 12, 'Meow')

def helloWorld():
	print('Hello world')