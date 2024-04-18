#ifndef SOCKET_CLIENT_H
#define SOCKET_CLIENT_H

#ifndef CLIENT_SOCKET_H
#define CLIENT_SOCKET_H

#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>
#include <stdlib.h>
#define PORT 5000
#define LG_MESSAGE 256

int main()
{
WSADATA WSAData;
WSAStartup(MAKEWORD(2,0), &WSAData); // indique la version utilisée, ici 2.0
//--- Etape n°1 :
SOCKET descripteurSocket;
int iResult;
// Crée un socket de communication
descripteurSocket = socket(AF_INET, SOCK_STREAM, 0); /* 0 indique que l’on
utilisera le protocole par défaut associé à SOCK_STREAM soit TCP */
if (descripteurSocket == INVALID_SOCKET)
{
printf("Erreur creation socket : %d\n", WSAGetLastError());
WSACleanup();
return 1;
}
//--Fin de l’étape n°1 !
printf("Socket crée avec succès !\n");

//--- Etape n°2 :
struct sockaddr_in pointDeRencontreDistant; // ou SOCKADDR_IN pointDeRencontreDistant;
// Renseigne la structure sockaddr_in avec les informations du serveur distant
pointDeRencontreDistant.sin_family = AF_INET;
// On choisit l’adresse IPv4 du serveur
pointDeRencontreDistant.sin_addr.s_addr = inet_addr("192.168.1.29"); // à modifier selonses besoins
// On choisit le numéro de port d’écoute du serveur
pointDeRencontreDistant.sin_port = htons(PORT); // = 5000
// Débute la connexion vers le processus serveur distant
iResult = connect(descripteurSocket, (SOCKADDR *)&pointDeRencontreDistant, sizeof(
pointDeRencontreDistant));
if (iResult == SOCKET_ERROR)
{
 printf("Erreur connexion socket : %d\n", WSAGetLastError());
 iResult = closesocket(descripteurSocket); // On ferme la ressource avant de quitter
 if (iResult == SOCKET_ERROR)
 {
 printf("Erreur fermeture socket : %d\n", WSAGetLastError());
 }
 WSACleanup();
 return 1; // On sort en indiquant un code erreur
}
//--- Fin de l’étape n°2 !
printf("Connexion au serveur réussie avec succès !\n");


//--- Etape n°4 :
char messageEnvoi[LG_MESSAGE]; /* le message de la couche Application ! */
char messageRecu[LG_MESSAGE]; /* le message de la couche Application ! */
int ecrits, lus; /* nb d’octets ecrits et lus */
sprintf(messageEnvoi, "bonjour\n");

ecrits = send(descripteurSocket, messageEnvoi, (int)strlen(messageEnvoi), 0); // messageà TAILLE variable
if (ecrits == SOCKET_ERROR)
{
 printf("Erreur envoi socket : %d\n", WSAGetLastError());
 closesocket(descripteurSocket);
 WSACleanup();
 return 1;
}
printf("Message %s envoyé avec succès (%d octets)\n\n", messageEnvoi, ecrits);
/* Reception des données du serveur */
lus = recv(descripteurSocket, messageRecu, sizeof(messageRecu), 0); /* attend un message de
TAILLE fixe */
if( lus > 0 ) /* réception de n octets */
 printf("Message reçu du serveurss : %s test (%d octets)\n\n", messageRecu, lus);
else if ( lus == 0 ) /* la socket est fermée par le serveur */
 printf("La socket a été fermée par le serveur !\n");
else /* une erreur ! */
 printf("Erreur lecture socket : %d\n", WSAGetLastError());
//--- Fin de l’étape n°4 !

// Fermeture de la ressource avant de quitter
iResult = closesocket(descripteurSocket);
if (iResult == SOCKET_ERROR)
{
printf("Erreur fermeture socket : %d\n", WSAGetLastError());
WSACleanup();
return 1;
}
WSACleanup(); // termine l’utilisation
return 0;
}

#endif // CLIENT_SOCKET_H


#endif // SOCKET_CLIENT_H
