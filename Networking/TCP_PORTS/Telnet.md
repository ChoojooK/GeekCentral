**Telnet**  
- **Port**: 23  
- **Description**: Telnet is a protocol used for remote command-line access to computers over a network. It allows users to connect to and control a remote server or device as if they were physically present at the terminal.

   **How It Works**:
   - **Connection**: The client connects to the server on port 23.
   - **Authentication**: Users typically log in with a username and password.
   - **Command Execution**: Once logged in, users can execute commands on the remote server, manage files, and perform administrative tasks.

   **Key Points**:
   - **Unencrypted**: Telnet transmits data, including login credentials, in plain text, making it vulnerable to eavesdropping and interception. For secure remote access, SSH is recommended.
   - **Simplicity**: Despite its lack of encryption, Telnet is simple and widely used for accessing network equipment and legacy systems.
   - **Basic Interface**: Provides a basic text-based interface without graphical support, suitable for command-line operations.

Telnet is useful for accessing and managing remote systems, particularly in environments where encryption is not required or in legacy systems. However, due to its security limitations, it is generally replaced by SSH for secure remote access.
