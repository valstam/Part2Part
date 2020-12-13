/*
** Here are the definitions of the client
*/

#pragma once
#include "../models.h"


void showWelcomeMessage(User*);
void trimString(char*, char);
void getBlocks(char[10][100], char*, int*);
int process(char[10][100], int);

void sendLoginCredentials(int, char[10][100], User*);
void getUserCredentials(int, User*);

void getLine(char*, int);

void showNotifications(char[10][100], int);
void showNotification(char*);

void pushNotification(char*, char[10][100], int*);
void popNotification(char[10][100], int*);

void getUsers(int, char[10][100], int*);

void printColors();