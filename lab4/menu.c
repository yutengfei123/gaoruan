#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "link_table.h"

#define CMD_NUM 10
#define CMD_MAX_LEN 128
#define CMD_ANNO_LEN 1024

typedef struct data_node
{
	link_table_node* next;
	char* cmd_name;
	char* cmd_annotation;
	int (*handler)();
}data_node;

int init_menu_(link_table**pp_table);
data_node* search_cmd(link_table* head,char* cmd);
int show_all_cmd(link_table* head);
int cmd_help();
int cmd_version();
int cmd_quit();
int cmd_others();

link_table* head =NULL;

int main(void)
{
	char cmd(CMD_MAX_LEN);
	init_menu(&head);
	while(true)
	{
		printf("please input your command>");
		scanf("%s",cmd);
		data_node* ptr = search_cmd(head,cmd);
		if(ptr ==NULL)
		{
			printf("ERROR command:'%s'\n",cm);
			continue;
		}
		printf("%s\n",ptr->cmd_annotation);
		if(ptr->handler !=NULL)
		{
			ptr->handler();
		
		}
	}
	return o;
}

