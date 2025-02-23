# Ft_irc

Ft_irc is a simple IRC (Internet Relay Chat) server written in C++. It allows users to interact with each other through web chat clients, providing basic IRC functionalities like channel creation, user communication, and more. The project focuses on implementing the core features of the IRC protocol using C++ and socket programming.

## Features

- **IRC Protocol Implementation**: A custom IRC server based on the Internet Relay Chat protocol.
- **Channel Management**: Users can create and join channels to communicate with others.
- **User Communication**: Supports user-to-user chat through private messages and public messages within channels.
- **Password Protection**: The server requires a password to connect, adding a layer of security.

## How to Use

To run the server, use the following command:

```bash
./ircserv <port> <password>
