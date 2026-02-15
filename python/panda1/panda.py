# import pandas as pd
# df=pd.read_csv('annual-enterprise-survey-2024-financial-year-provisional.csv')
# d=pd.DataFrame(df)
# print(d)

import pandas as pd 
df = pd.read_csv('customers-100.csv')
d = pd.DataFrame(df)
# print(d)
d.head(5)
# d.info()

# import pandas as pd
# df = pd.read_csv('customers-100.csv')
# new_df = df.dropna()
# print(new_df)

import pandas as pd
df =pd.read_csv('customers-100.csv')
df.dropna(inplace=True)
print(df)