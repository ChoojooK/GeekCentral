**TFTP (Trivial File Transfer Protocol)**  
- **Port**: 69  
- **Description**: TFTP is a simple protocol for transferring files over a network. It is a lightweight, connectionless protocol used for basic file transfers, typically in environments where a full-featured file transfer protocol like FTP is not required.

   **How It Works**:
   - **Connection**: TFTP uses UDP on port 69 for communication, which is connectionless and does not require a handshake to establish a connection.
   - **File Transfer**: Clients send requests to the TFTP server to upload or download files. The server responds with the requested file or acknowledges file uploads.
   - **Data Blocks**: Files are transferred in small blocks, with each block being acknowledged by the recipient. If an acknowledgment is not received, the sender retransmits the block.

   **Key Points**:
   - **Simplicity**: TFTP is designed to be simple and lightweight, making it suitable for situations where minimal overhead is preferred.
   - **No Authentication**: TFTP does not support authentication or encryption, so it should be used in secure, controlled environments.
   - **Use Cases**: Commonly used for network booting (e.g., PXE boot), configuration management, and transferring firmware or software updates.

TFTP is often used in scenarios where its simplicity is advantageous, such as booting devices or transferring files in embedded systems. However, due to its lack of security features, it is less suitable for general-purpose file transfers over the internet.
