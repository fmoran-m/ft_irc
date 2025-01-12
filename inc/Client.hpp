
#ifndef CLIENT_HPP
# define CLIENT_HPP

# include <string>
# include <iostream>
# include <vector>

class Channel;

class Client {
	private:
		int 		fd;
		bool		verified;
		bool		registered;
		std::string	nick;
		std::string	username;
		std::string	realname;
		std::vector<Channel *> clientChannels;

	public:
		Client(void);
		Client(int receivedFd);
		~Client(void);

		// Getters
		int	getSocketFd(void) const;
		std::string	getNickname(void) const;
		std::string getUsername(void) const;
		std::string getRealname(void) const;
		bool isVerified(void) const;
		bool isRegistered(void) const;

		// Setters
		void setNickname(std::string nickname);
		void setUsername(std::string user);
		void setRealname(std::string realname);
		void setVerified(bool tf);
		void setRegistered(bool tf);

		// Methods
		static Client	*findClientByFd(int fd, std::vector<Client> &clients);
		bool			isClientInChannel(std::string channelName);
		void			addClientChannel(Channel &channel);
};

#endif
