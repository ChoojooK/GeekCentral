**FTP (File Transfer Protocol)**  
- **Port**: 21 (Control), 20 (Data - for active mode transfers)  
- **Description**: FTP is used to transfer files between a client and a server over a network. It operates on a client-server model, where the client initiates a connection to the server to upload, download, or manipulate files and directories.

   **How It Works**: 
   - The client connects to the server on port 21, which is the control connection used for sending commands (like login, file requests, etc.).
   - When a file transfer begins, a separate data connection is established, typically on port 20 in active mode, or a dynamic port in passive mode.
   - FTP supports both binary and ASCII file transfers, meaning it can handle both text and non-text data.
   
   **Key Points**:
   - **Authentication**: Requires login credentials (username and password), but there are also anonymous FTP servers that allow limited access without credentials.
   - **Unencrypted**: Standard FTP sends data in plain text, making it vulnerable to interception (including credentials). For secure transfers, protocols like FTPS (FTP Secure) or SFTP (SSH File Transfer Protocol) are preferred.
   - **Modes**: 
     - **Active Mode**: The server initiates the data connection to the client on port 20.
     - **Passive Mode**: The client initiates both the control and data connections, useful when the client is behind a firewall.

FTP is still used for file transfers in many environments but is often replaced by more secure alternatives like SFTP or FTPS when security is a concern.
