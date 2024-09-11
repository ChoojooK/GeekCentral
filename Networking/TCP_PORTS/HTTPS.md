**HTTPS (Hypertext Transfer Protocol Secure)**  
- **Port**: 443  
- **Description**: HTTPS is the secure version of HTTP. It ensures encrypted communication between a client (like a web browser) and a server using SSL/TLS (Secure Sockets Layer / Transport Layer Security). This protects data from being intercepted or tampered with during transmission, making it ideal for sensitive activities like online banking, shopping, and login forms.

   **How It Works**: 
   - The client initiates a connection to the server on port 443.
   - A secure handshake takes place using SSL/TLS to establish an encrypted connection.
   - After encryption is established, the client sends HTTP requests (like `GET`, `POST`, etc.) within the secure channel.
   - The server responds with the requested data, also encrypted.

   **Key Points**:
   - **Encrypted**: All data exchanged is encrypted, ensuring privacy and data integrity.
   - **Authentication**: HTTPS uses digital certificates to verify the identity of the server, ensuring that the client is communicating with the legitimate website.
   - **Widely Adopted**: Most modern websites use HTTPS by default to protect user data and improve security.

In short, HTTPS ensures secure communication over the web, making it the standard for transmitting sensitive information.
