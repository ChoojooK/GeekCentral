**DNS over TCP**  
- **Port**: 53  
- **Description**: DNS (Domain Name System) primarily uses UDP for querying domain names, but switches to TCP for specific purposes, such as handling large DNS responses and zone transfers.

   **How It Works**:
   - **Standard Queries**: DNS queries are usually sent over UDP on port 53 for quick and efficient resolution of domain names.
   - **TCP Usage**: When a DNS response is too large for a single UDP packet or for zone transfers (transferring DNS zone data between servers), the query and response are sent over TCP on port 53. This ensures reliable data transmission and allows for the handling of larger datasets.
   - **Connection**: The client initiates a TCP connection to the DNS server, and data is exchanged over this connection.

   **Key Points**:
   - **Reliability**: TCP ensures reliable delivery of DNS responses, handling data that might be too large for UDP’s smaller packet size.
   - **Zone Transfers**: Used for transferring entire DNS zone files between servers, which involves large amounts of data not suitable for UDP.
   - **Fallback**: If a UDP query fails or the response size exceeds the limit, the DNS resolver may retry the query using TCP.

DNS over TCP is crucial for scenarios where reliability and data integrity are important, such as large DNS responses and server-to-server communication for zone transfers.
