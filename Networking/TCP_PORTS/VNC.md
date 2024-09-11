**VNC (Virtual Network Computing)**  
- **Port**: 5900 (default)  
- **Description**: VNC is a protocol that allows users to remotely control another computer's desktop environment over a network. It provides a way to interact with the remote machine’s graphical user interface (GUI) as if the user were sitting in front of it.

   **How It Works**:
   - **Connection**: The VNC client connects to the remote VNC server on port 5900 (or a port number offset from 5900 based on the display number).
   - **Authentication**: The client must authenticate with the server using a password or other security methods.
   - **Remote Access**: Once connected, the client can see and control the remote desktop, allowing users to run applications and manage files as if they were directly interacting with the remote system.

   **Key Points**:
   - **Cross-Platform**: VNC is platform-independent, meaning it can be used to connect between different operating systems, such as Windows, Linux, and macOS.
   - **Graphical Interface**: Provides full graphical desktop access, making it useful for remote administration, technical support, and accessing applications.
   - **Encryption**: Basic VNC implementations may not provide strong encryption by default, so additional security measures (like tunneling through SSH or using a VPN) are recommended for secure access.

VNC is valuable for remote desktop access and support, allowing users to work on or troubleshoot remote computers from anywhere.
