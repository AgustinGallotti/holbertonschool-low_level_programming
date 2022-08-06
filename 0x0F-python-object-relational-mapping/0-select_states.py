#!/usr/bin/python3
"""
    module
"""

import MySQLdb
from sys import argv

#connection
if __name__ == '__main__':
    db = MySQLdb.connect(host="localhost", port=3306, user=argv[1],
                        passwd=argv[2], db=argv[3])
    c = db.cursor()
    c.execute("SELECT id, name FROM states")
    for row in c.fetchall():
        print("({}, '{}')".format(row[0], row[1]))
