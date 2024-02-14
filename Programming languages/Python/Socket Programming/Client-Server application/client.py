# client-side script

import socket

# Create a socket object
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Get the local machine name and port number
host = socket.gethostname()
port = 12345

# Connect to the server
client_socket.connect((host, port))

# Receive data from the server
data = client_socket.recv(1024)

print("Received message from server:", data.decode())

# Close the client socket
client_socket.close()
