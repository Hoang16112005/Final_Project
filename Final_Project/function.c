// noi di trien khai ham

int addAccount(struct registerAccount acc[], int *n ){
	char nameUser[50];
	char password[50];
	char confirmPassword[50];
	printf("Enter new user name: ");
	scanf("%s", nameUser);
	for (int i = 0; i < *n; i++){
		if (strcmp(acc[i].nameUser, nameUser) == 0) {
			printf("Account was exsisted, please choose another account");
			return 0;
		}
	}
	printf("Enter new password:");
	scanf("%s", &password);
	printf("Confirm password");
	scanf("%s", &confirmPassword);
	if (strcpm(password, confirmPasswod) == 0){
		printf("Not match, try again");
		return;
	}
	strcpy(acc[*n].nameUser, nameUser);
	strcpy(acc[*n].password, password);
	(*n)++;
	saveAccount(acc, *n);
	printf("Register completed");
	return 1;
}

int saveAccount(struct registerAccount acc[], int n){
	FILE *file;
	file = fopen("account.bin", "wb");
	if (file == NULL){
		printf("Can't open file");
		return 1;
	}
	fwrite (acc, sizeof(struct registerAccount), n, file);
	fclose(file);
}

int readAcc(struct registerAccount acc[]){
	FILE *file;
	file = fopen("account.bin", "rb");
	int n = 0;
	while(fread(&acc[n], sizeof(struct registerAccount), 1, file)){
		n++;
	}
	fclose(file);
	return n;
}
