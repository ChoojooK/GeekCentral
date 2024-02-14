# Server-side script

import socket

# Create a socket object
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Get the local machine name and port number
host = socket.gethostname()
port = 12345

# Bind the socket to the host and port
server_socket.bind((host, port))

# Listen for incoming connections
server_socket.listen(5)

print("Server listening on {}:{}".format(host, port))

while True:
    # Accept incoming connections
    client_socket, addr = server_socket.accept()

    print("Got a connection from {}".format(addr))

    # Send a welcome message to the client
    message = "Welcome to the server!"
    client_socket.send(message.encode())

    # Close the client socket
    client_socket.close()
