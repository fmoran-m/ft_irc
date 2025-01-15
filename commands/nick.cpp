
#include "../inc/Client.hpp"
#include "../inc/Server.hpp"
#include <string>

bool isNicknameValid(std::string nickname)
{
	// Check length (1 to 9 characters)
	if (nickname.empty() || nickname.length() > 9)
		return false;
	// Check the first character (no digits nor - from the allowed set of chars)
	char c = nickname[0];
	if (!(std::isalpha(c) || c == '_' || c == '[' || c == ']' || c == '\\' || c == '{' || c == '}' || c == '|'))
		return false;
	// Check the rest of the characters
	for (size_t i = 1; i < nickname.length(); ++i) {
		if (!(std::isalnum(nickname[i]) || nickname[i] == '_' || nickname[i] == '-' || nickname[i] == '[' || nickname[i] == ']' || nickname[i] == '\\' || nickname[i] == '{' || nickname[i] == '}' || nickname[i] == '|'))
			return false;
	}
	return true;
}

bool isNicknameInUse(std::string nickname, Client *client)
{
	const Server* server = client->getServer();
	const std::vector<Client>& clients = server->getClients();
	for (std::vector<Client>::const_iterator it = clients.begin(); it != clients.end(); ++it) {
		if (it->getNickname() == nickname) {
			return true;
		}
	}
	return false;
}