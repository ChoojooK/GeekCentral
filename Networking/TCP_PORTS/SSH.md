**SSH (Secure Shell)**  
- **Port**: 22  
- **Description**: SSH is a protocol used for secure remote access and management of servers, allowing encrypted communication over an unsecured network. It’s commonly used by system administrators to control and modify servers, transfer files, and execute commands securely.

   **How It Works**:
   - The client connects to the server on port 22.
   - An encrypted connection is established using public key cryptography (or optionally password-based authentication).
   - Once connected, the user can execute commands, transfer files, and tunnel other protocols (like HTTP or FTP) through the secure channel.

   **Key Points**:
   - **Encryption**: All communication is encrypted, ensuring confidentiality and integrity of the data being transmitted.
   - **Authentication**: Typically uses public-private key pairs for strong authentication, but can also use passwords.
   - **Tunneling**: SSH allows tunneling of other services, like running a secure version of VNC or X11 forwarding through the SSH connection.
   - **SCP and SFTP**: SSH includes secure file transfer protocols (SCP and SFTP) to replace insecure methods like FTP.

SSH is widely used for secure access to remote systems, making it essential for secure administration, file transfers, and remote management of servers.
