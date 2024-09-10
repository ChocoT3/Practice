#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define INIT_SZ 3
#define INCREAING_SZ 2
#define MAX 100
#define MAX_NAME 100
#define MAX_SEX 100
#define MAX_TELE 100
#define MAX_ADDR 100

//PeoInfo
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//
////¾²Ì¬°æ±¾
//typedef struct contact
//{
//	PeoInfo data[MAX];
//	int count;
//}contact;

//¶¯Ì¬°æ±¾
typedef struct contact
{
	PeoInfo* data;
	int count;
	int capacity;
}contact;

void InitPeoInfo(contact* con);
void AddPeo(contact* con);
void ShowPeoInfo(const contact* con);
void DelPeo(contact* con);
void SearchPeo(contact* con);
void ModifyPeo(contact* con);
void Exit(contact* con);
void SortPeo(contact* con);
void DestroyContact(contact* con);

