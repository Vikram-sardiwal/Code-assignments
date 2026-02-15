# import mysql.connector as mp
# db=mp.connect(
#     host="localhost",
#     user = "root",
#     password = "6367656922",
#     database = "vikram"

# )
# print(db)
# mycursor=db.cursor()
# a = "INSERT INTO customers (name ,address) VALUES (%s,%s)"
# b = ("john","australia ")
# mycursor.execute(a,b)

# db.commit()
# print(mycursor.rowcount, "record inserted.")

#fetchall--
# mycursor.execute("SELECT *from customers")
# myresult = mycursor.fetchall()

# for x in myresult:
#     print(myresult)

#fetchone--
# mycursor.execute("SELECT *from customers")
# myresult = mycursor.fetchone()
# print(myresult)


# a = "SELECT * FROM customers WHERE address = 'australia '"
# mycursor.execute(a)
# myresult = mycursor.fetchall()

# for x in myresult:
#     print(x)

#wildcard characters:
# a = "SELECT * FROM customers WHERE address LIKE '%way%'"
# mycursor.execute(a)
# myresult = mycursor.fetchall()

# for i in myresult:
#     print(i)


# %s method
# a = "SELECT * FROM customers WHERE address = %s"
# b = ("australia ",)
# mycursor.execute(a,b)
# myresult = mycursor.fetchall()
# for i in myresult:
#     print(i)

#order by--

# a = "SELECT *FROM customers ORDER BY name"
# mycursor.execute(a)
# myresult = mycursor.fetchall()
# for i in myresult:
#     print(i)


#ORDER BY DESC
# a = "SELECT *FROM customers ORDER BY name DESC"
# mycursor.execute(a)
# myresult = mycursor.fetchall()
# for i in myresult:
#     print(i)

#Delete Record
# 1. Correct the SQL string
# a = "DELETE FROM customers WHERE name = 'aman'"

# # 2. Execute the command
# mycursor.execute(a)

# # 3. Commit the change to the database (Required for DELETE)
# db.commit()

# print(mycursor.rowcount, "record(s) deleted")
# a = "UPDATE customers SET address = 'canyon 123' WHERE address ='uk'"
# mycursor.execute(a)
# db.commit()
# print(mycursor.rowcount,"records affected")

#limit --
# mycursor.execute("SELECT *FROM customers LIMIT 5")
# myresult = mycursor.fetchall()
# for i in myresult:
#     print(i)

#offset
# mycursor.execute("SELECT *FROM customers LIMIT 5 OFFSET 2")
# myresult = mycursor.fetchall()
# for i in myresult:
#     print(i)

#join
