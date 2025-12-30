from sklearn import tree
model = tree.DecisionTreeClassifier(criterion='gini')
model.fit(X, y)
model.score(X, y)
predicted = model.predict(x_test)
