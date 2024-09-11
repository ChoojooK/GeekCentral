**HTTP (Hypertext Transfer Protocol)**  
- **Port**: 80  
- **Description**: HTTP is the foundation of data communication on the web. It works as a request-response protocol, where a client (typically a web browser) sends a request to a server, and the server responds with the requested resources, like HTML files, images, or other media. 

   **How It Works**: 
   - The client initiates a connection to the server on port 80.
   - A request is made using methods like `GET`, `POST`, `PUT`, or `DELETE`, specifying what the client wants.
   - The server processes the request and sends back a status code (e.g., 200 for success or 404 for not found) along with the requested resource or an error message.
   
   **Key Points**: 
   - **Stateless**: Each request is independent of others, meaning the server doesn’t retain any memory of previous requests from the same client.
   - **Unencrypted**: HTTP traffic is in plain text, making it vulnerable to eavesdropping or tampering. For secure communication, HTTPS (port 443) is preferred, which encrypts data using SSL/TLS.

HTTP is widely used for transferring web content but is typically replaced by HTTPS for sensitive data due to security concerns.
