**BGP (Border Gateway Protocol)**  
- **Port**: 179  
- **Description**: BGP is a standardized exterior gateway protocol used to exchange routing information between different autonomous systems (ASes) on the Internet. It helps determine the best paths for data to travel across the internet by evaluating various routing paths and policies.

   **How It Works**:
   - **Connection**: BGP peers (routers in different ASes) establish a TCP connection on port 179.
   - **Exchange of Routes**: Routers exchange routing information, including available paths and their attributes. Each BGP router maintains a routing table based on these exchanges.
   - **Path Selection**: BGP uses attributes like AS path, next hop, and prefix length to determine the best route for data. The selected path is then used for routing traffic across the internet.

   **Key Points**:
   - **Inter-AS Routing**: BGP is designed for routing between different ASes, as opposed to intra-AS routing protocols like OSPF or EIGRP.
   - **Scalability**: BGP is capable of handling a large number of routes and is essential for the global routing infrastructure of the Internet.
   - **Policy-Based Routing**: Allows network administrators to define routing policies based on various attributes, providing control over traffic flow and network performance.

BGP is crucial for maintaining the global routing table and ensuring that data travels efficiently and reliably across the internet's complex network of interconnected ASes.
