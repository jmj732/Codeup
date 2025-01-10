# -*- coding: utf-8 -*-
"""캘리포니아 중간 주택 가격 분석.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1qUjzS1dcBynsFRbDxwokWEc_EI8pMGkm
"""

import matplotlib.pyplot as plt
import pandas as pd
from sklearn.linear_model import LinearRegression
from sklearn.neighbors import KNeighborsRegressor

data_root = "https://github.com/ageron/data/raw/main/"
lifesat = pd.read_csv(data_root + "lifesat/lifesat.csv")
x = lifesat[["GDP per capita (USD)"]].values
y = lifesat[["Life satisfaction"]].values

lifesat.plot(kind="scatter", grid=True, x = "GDP per capita (USD)",
y = "Life satisfaction")

plt.axis([23_500,62_500,4,9])

plt.show()
model = LinearRegression()
model.fit(x,y)
X_new = [[37_655.2]]
print(model.predict(X_new))

model = KNeighborsRegressor(n_neighbors=3)
model.fit(x,y)
print(model.predict(X_new))

from pathlib import Path
import pandas as pd
import tarfile
import urllib.request

def load_housing_data():
    tarball_path = Path("datasets/housing.tgz")
    if not tarball_path.is_file():
        Path("datasets").mkdir(parents=True, exist_ok=True)
        url = "https://github.com/ageron/data/raw/main/housing.tgz"
        urllib.request.urlretrieve(url, tarball_path)
        with tarfile.open(tarball_path) as housing_tarball:
          housing_tarball.extractall(path="datasets")
    return pd.read_csv(Path("datasets/housing/housing.csv"))

housing = load_housing_data()
housing

import matplotlib.pyplot as plt
housing.hist(bins=50,figsize = (12,8))
plt.show()

import matplotlib.pyplot as plt


housing.plot(kind = 'scatter',x = 'longitude', y = 'latitude', grid = True, alpha=0.2)

plt.show()

import matplotlib.pyplot as plt


housing.plot(kind = 'scatter',x = 'longitude', y = 'latitude', s=housing["population"] / 100, c = "median_house_value", cmap='jet', colorbar=True, legend=True,  grid = True, figsize=(10,7))
plt.show()

from pandas.plotting import scatter_matrix
attributes = ["median_house_value", "median_income", "total_rooms", "housing_median_age"]
scatter_matrix(housing[attributes], figsize= (12,8) )
plt.show()