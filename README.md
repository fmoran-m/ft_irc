Server class in progress. So far it is accepting connections. Compile with make. Execute 'ircserv 1234 pass'. Open another terminal window, execute 'nc 127.0.0.1 1234' and a new connection is added to Server::fds vector (a message is printed showing the fd assigned to this new connection). If you open another terminal window and repeat the operation a new connection ("client") will be added. TO DO: start Client class to track every connected "client" (connection)
