#!/usr/bin/python3
"""
    module
"""


#connection
if __name__ == '__main__':
    import MySQLdb
    from sys import argv

    db = MySQLdb.connect(host="localhost", port=3306, user=argv[1],
                        passwd=argv[2], db=argv[3])

    c = db.cursor()
    c.execute("SELECT id, name FROM states "
              "WHERE SUBSTR(name, 1, 1)='N' "
              "ORDER BY id")
    result = c.fetchall()
    for row in result:
        print(row)
    db.close()
