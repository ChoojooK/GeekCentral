**DHCP (Dynamic Host Configuration Protocol)**  
- **Ports**: 67 (Server), 68 (Client)  
- **Description**: DHCP is a network management protocol used to automatically assign IP addresses and other network configuration details to devices (clients) on a network. This simplifies the process of connecting devices to a network without manual configuration.

   **How It Works**:
   - **DHCP Discover**: The client sends a broadcast message to the network on port 67 to find a DHCP server.
   - **DHCP Offer**: The DHCP server responds with an offer containing an IP address and configuration details on port 68.
   - **DHCP Request**: The client requests the offered IP address by sending a message to the server.
   - **DHCP Acknowledgment**: The server acknowledges the request and assigns the IP address to the client.

   **Key Points**:
   - **Automatic Configuration**: Reduces the need for manual IP address configuration, helping to avoid IP conflicts and configuration errors.
   - **Lease Time**: IP addresses are leased for a specific period, after which the client must renew the lease or request a new IP address.
   - **Options**: DHCP can provide additional configuration details, such as default gateway, DNS servers, and network mask.

DHCP is crucial for simplifying network management and ensuring that devices can connect to and operate on a network with minimal manual setup.
