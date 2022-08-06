#!/usr/bin/python3
"""
    module
"""

import MySQLdb
from sys import argv

db = MySQLdb.connect(host="localhost", user=argv[1], password=argv[2], db=argv[3], port=3306)

c = db.cursor()
c.execute("SELECT id, name FROM states "
		  "WHERE SUBSTR(name, 1, 1)='N' "
		  "ORDER BY id")
rows = c.fetchall()
for row in rows:
    print (row)
