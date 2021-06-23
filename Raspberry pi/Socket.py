import socket
mysoc = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
adir = ("", 1234)
mysoc.bind(adir)
mysoc.listen(5)
while True:
    conn, addr = mysoc.accept()
    data = conn.recv(1000)
    if data == b'\n':
        break
    else:
        print ("Got a request!")
        print (data)
conn.close()
mysoc.close()