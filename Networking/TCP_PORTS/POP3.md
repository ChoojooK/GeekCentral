**POP3 (Post Office Protocol version 3)**  
- **Port**: 110 (Standard), 995 (Secure - POP3S)  
- **Description**: POP3 is a protocol used for retrieving emails from a mail server to a local email client. It allows users to download emails from the server to their device, where they can read and manage them offline.

   **How It Works**:
   - **Connection**: The email client connects to the mail server on port 110 (or 995 for secure connections).
   - **Authentication**: The client authenticates with the server using a username and password.
   - **Download**: Emails are downloaded from the server to the client. By default, POP3 downloads and often removes the emails from the server, meaning they are stored locally and no longer available on the server.
   - **Offline Access**: Once downloaded, emails can be accessed and managed offline.

   **Key Points**:
   - **Simple Protocol**: POP3 is straightforward and typically used for basic email retrieval.
   - **Limited Synchronization**: POP3 does not synchronize messages or folders between the client and server. Actions taken on one device (like deleting emails) won’t affect other devices.
   - **Security**: POP3S (POP3 over SSL/TLS) encrypts the connection, providing security against eavesdropping and data theft.

POP3 is ideal for users who need to download emails to a single device and do not require ongoing synchronization with the email server. For multiple device access and synchronization, IMAP is often preferred.
