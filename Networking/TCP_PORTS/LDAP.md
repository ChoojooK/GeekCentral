**LDAP (Lightweight Directory Access Protocol)**  
- **Port**: 389 (Standard), 636 (Secure - LDAPS)  
- **Description**: LDAP is a protocol used for accessing and managing directory information services over a network. It provides a standardized way to query and update information stored in a directory, which is often used for managing user credentials and organizational data.

   **How It Works**:
   - **Connection**: LDAP clients connect to the directory server on port 389 (or 636 for secure connections).
   - **Authentication**: Clients authenticate to the server using a username and password or other mechanisms.
   - **Query and Update**: Clients perform operations such as searching for user information, updating records, and managing directory entries using LDAP commands.

   **Key Points**:
   - **Directory Services**: LDAP is commonly used for accessing directory services, such as managing user accounts, email addresses, and organizational information.
   - **Hierarchical Structure**: The directory is organized in a hierarchical manner, often reflecting the organizational structure, which makes it efficient for queries and management.
   - **Security**: LDAPS (LDAP over SSL/TLS) encrypts the connection to secure the data transmitted between the client and the server.

LDAP is widely used in enterprise environments for user authentication, directory management, and as a backend for various applications and services.
