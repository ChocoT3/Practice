#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"


////¾²Ì¬°æ±¾
//void InitPeoInfo(contact* con)
//{
//	assert(con);
//	con->count = 0;
//	memset(con->data, 0, sizeof(PeoInfo)*MAX);
//	return;
//}

//¶¯Ì¬°æ±¾
void InitPeoInfo(contact* con)
{
	con->data = (PeoInfo*)calloc(3,sizeof(PeoInfo));
	if (con->data == NULL)
	{
		printf("InitPeoInfo::%s", strerror(errno));
	}
	con->count = 0;
	con->capacity= 3;
}

//¾²Ì¬°æ±¾
//void AddPeo( contact* con)
//{
//	assert(con);
//	if (con->count == 100)
//	{
//		printf("CONTACT FULLED");
//		return;
//	}
//	printf("Enter Name:>");
//	scanf("%s", con->data[con->count].name);
//	printf("Enter sex:>");
//	scanf("%s", con->data[con->count].sex);	
//	printf("Enter age:>");
//	scanf("%d", &(con->data[con->count].age));	
//	printf("Enter tele:>");
//	scanf("%s", &(con->data[con->count].tele));
//	printf("Enter addr:>");
//	scanf("%s", &(con->data[con->count].addr));
//	con->count++;
//	printf("ADD SUCCESSED\n");
//	return;
//}
void CheckCapacity(contact* con)
{
	if (con->count == con->capacity)
	{
		PeoInfo* NewP = (PeoInfo*)realloc(con->data, (con->capacity + INCREAING_SZ) * sizeof(PeoInfo));
		if (NewP != NULL)
		{
			con->data = NewP;
			con->capacity += INCREAING_SZ;
			printf("SUCCESSED\n");
		}
		else
		{
			printf("AddPeo::%s", strerror(errno));
		}
	}
}

//¶¯Ì¬°æ±¾
void AddPeo(contact* con)
{
	assert(con);
	CheckCapacity(con);
	printf("Enter Name:>");
	scanf("%s", con->data[con->count].name);
	printf("Enter sex:>");
	scanf("%s", con->data[con->count].sex);
	printf("Enter age:>");
	scanf("%d", &(con->data[con->count].age));
	printf("Enter tele:>");
	scanf("%s", &(con->data[con->count].tele));
	printf("Enter addr:>");
	scanf("%s", &(con->data[con->count].addr));
	con->count++;
	printf("ADD SUCCESSED\n");
	return;
}

void DestroyContact(contact* con)
{
	assert(con);
	free(con->data);
	con->data = NULL;
	printf("DESTROYED\n");
}

static int FindByName(char* s,contact* con)
{
	int i = 0;
	for (i = 0; i < con->count; i++)
	{
		if (0 == strcmp(con->data[i].name, s))
		{
			return i;
		}
	}
	return -1;
}

void ShowPeoInfo(const contact* con)
{
	assert(con);
	if (con->count == 0)
	{
		printf("CONTACT NULL\n");
		return;
	}
	printf("%-20s\t%-10s\t%5s\t%-12s\t%-30s\n", "NAME", "SEX","AGE", "TELE", "ADDR");
	for (int i = 0; i < con->count; i++)
	{
		printf("%-20s\t%-10s\t%-5d\t%-12s\t%-30s\n", con->data[i].name, con->data[i].sex, con->data[i].age, con->data[i].tele, con->data[i].addr);
	}
	return;
}
void DelPeo(contact* con)
{
	assert(con);
	printf("Enter A Name To Del;>");
	char Tmp_Name[MAX_NAME];
	scanf("%s", Tmp_Name);
	int ret = FindByName(Tmp_Name,con);
	if (ret > 0)
	{
		for (int i = ret; i < con->count - 1; i++)
		{
			con->data[i] = con->data[i + 1];
		}
		con->count--;
		printf("DEL SUCCESSED\n");
		return;
	}
	else
		printf("NONP-PEOINFO\n");
	return;
}

void SearchPeo(contact* con)
{
	assert(con);
	printf("Enter A Name To Search:>");
	char Tmp_Name[MAX_NAME];
	scanf("%s", Tmp_Name);
	int ret = FindByName(Tmp_Name, con);

}

void ModifyPeo(contact* con)
{
	assert(con);
	printf("Enter A Name To Search:>");
	char Tmp_Name[MAX_NAME];
	scanf("%s", Tmp_Name);
	int ret = FindByName(Tmp_Name, con);
	printf("Modify What:>\t1-Name\t2-Sex\t3-Age\t4-Tele\t5-Addr\t0-Exit");
	int input = 0;
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		printf("New Name:>");
		char New_Name[MAX_NAME];
		scanf("%s", New_Name);
		memcpy(con->data[ret].name, New_Name, MAX_NAME);
		printf("MODIFY SUCCESSED\n");
		break;
	case 2:
		printf("New Sex:>");
		char New_Sex[MAX_SEX];
		scanf("%s", New_Sex);
		memcpy(con->data[ret].sex, New_Sex, MAX_SEX);
		printf("MODIFY SUCCESSED\n");
		break;
	case 3:
		printf("New Age:>");
		int New_Age = 0;
		scanf("%d", &New_Age);
		con->data[ret].age = New_Age;
		printf("MODIFY SUCCESSED\n");
		break;
	case 4:
		printf("New Tele:>");
		char New_Tele[MAX_TELE];
		scanf("%s", New_Tele);
		memcpy(con->data[ret].tele, New_Tele, MAX_TELE);
		printf("MODIFY SUCCESSED\n");
		break;
	case 5:
		printf("New Addr:>");
		char New_Addr[MAX_ADDR];
		scanf("%s", New_Addr);
		memcpy(con->data[ret].addr, New_Addr, MAX_ADDR);
		printf("MODIFY SUCCESSED\n");
		break;
	case 0:
		printf("Exit MODIFY\n");
		break;
	default:
		printf("ENTER ERROR");
		break;
	}
	return;

}

int CmpByName(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name , ((PeoInfo*)e2)->name);
}

void SortPeo(contact* con)
{
	assert(con);
	qsort(con->data, con->count, sizeof(PeoInfo), CmpByName);
	printf("SORT SUCCESSED\n");
}

void Exit(contact* con)
{
	return;
}
