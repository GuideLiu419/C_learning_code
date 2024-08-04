#pragma once

typedef struct PeoInfo
{
	char name[20];
	char age;
	char sex[10];
	char tele[12];
	char addr[30];
}PeoInfo;

typedef struct contact
{
	PeoInfo data[100];
	int count;
}contact;