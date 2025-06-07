#pragma once

#define LOGIN_H

#define MAX_LEN 21

struct LOGIN
{
	char ID[MAX_LEN];
	char PW[MAX_LEN];
};

void getLogin(struct LOGIN* user);
void printLogin(const struct LOGIN* user);#pragma once
