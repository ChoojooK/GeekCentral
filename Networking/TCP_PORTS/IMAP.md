**IMAP (Internet Message Access Protocol)**  
- **Port**: 143 (Standard), 993 (Secure - IMAPS)  
- **Description**: IMAP is a protocol used for accessing and managing emails on a mail server. Unlike POP3, IMAP allows users to view and manage their emails on the server without downloading them, providing greater flexibility and synchronization across multiple devices.

   **How It Works**:
   - **Connection**: The email client connects to the mail server on port 143 (or 993 for secure connections).
   - **Authentication**: The client authenticates with the server using a username and password.
   - **Synchronization**: IMAP maintains emails on the server, allowing users to access and manage their messages from multiple devices. Actions like reading, deleting, or organizing emails are synchronized with the server.
   - **Folder Support**: IMAP supports multiple folders and subfolders on the server, allowing users to organize their emails in a structured way.

   **Key Points**:
   - **Server-Based**: Emails are stored on the server, so users can access their messages from any device with IMAP support, and actions are reflected across all devices.
   - **Synchronization**: IMAP keeps the email client and server in sync, which is ideal for users who access their email from various locations or devices.
   - **Security**: IMAPS (IMAP over SSL/TLS) provides encryption for the connection, securing data against interception and unauthorized access.

IMAP is suited for users who need to access their email from multiple devices or locations, offering robust synchronization and management features compared to POP3.
