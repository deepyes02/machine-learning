import pandas
from sklearn import linear_model
# Here based on the volume (engine litre) and weight, we are going to find out which car produces more CO2
"""
Car,Model,Volume,Weight,CO2
Toyoty,Aygo,1000,790,99
"""
df = pandas.read_csv("data.csv")
# model = df['Model']
# volume = df['Volume']
# weight = df['Weight']
# co2 = df['CO2']

# Common usage to use capital X to define independent data points and small y to denote dependent data point


X = df[['Weight', 'Volume']]
y = df['CO2']

regression = linear_model.LinearRegression()
regression.fit(X.values, y.values)

def predict(weight, volume):
	return regression.predict([[weight, volume]])


print(predict(1200, 100))

