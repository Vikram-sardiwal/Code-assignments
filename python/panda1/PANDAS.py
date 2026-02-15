import pandas as pd
# create dataframe
df = pd.DataFrame([11,22,33,44,55,66],columns=['col_name'])
# print(df)

#example
data = {
    'name':['vikram','radhika','sahil','yashika'],
    'age':[22,21,20,4],
    'salary':[200000,190000,150000,197000]

}
df=pd.DataFrame(data)
# print(df)

#basis dataframe understanding
df.head(2) #top rows
# df.tail(2) #last rows
# df.shape()
# df.columns
df1 = df.rename(columns={'salary':'monthly_salary'})
print(df1)
