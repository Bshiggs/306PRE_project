# include <stdio.h>

int main(int argc, char*argv[]){
		//READS COMMAND ARGUEMENTS AND CALL BELOW FUNCTIONS 
		
		if(argc < 2){ 		//IF NOT ENOUGH ARGUEMENTS PROVIDED
			printf("No argument provided");
			return 1;
		}
		
		for(int x = 1; x < argc; x++){
			if (strncmp("-f", argv[x], 2) == 0){
				f();
			}
			else if (strncmp("-r", argv[x], 2) == 0){
				r();
			}
		
			else if (strncmp("-h", argv[x], 2) == 0){
				h();
			}
		
			else if (strncmp("-max", argv[x], 4) == 0){
				x++;
				max(argv[x]);
			}
		
			else if (strncmp("-min", argv[x], 4) == 0){
				x++;
				min(argv[x]);
			}
		
			else if (strncmp("-mean", argv[x], 5) == 0){
				x++;
				mean(argv[x]);
			}
		
			else if (strncmp("-records", argv[x], 8) == 0){
				x++;
				records(argv[x]);
			}
			else if (x + 1 == argc){	//LAST ARGUEMENT SHOULD BE CSV FILE SO CALL READCSV AND RETURN 0
				readcvs(argv[x]);
				return 0;
			}
		}
		
}

void readcvs(char field[]){
		///TODO: READ AND PARSE CSV FILE
}

void f(){
		///TODO: Display the number of fields in the first record of file
}

void r(){
		///TODO: Display the number of data records in file
}

void h(){
		///TODO: Treat the first record of file as a header record rather than a data record
}

void max(char field[]){
		///TODO: Display the maximum value in the indicated field of the data records
}

void min(char field[]){
		///TODO: Display the minimum value in the indicated field of the data records
}

void mean(char field[]){
		///TODO: Display the arithmetic mean (average) value in the indicated field of the data records
}

void records(char field[]){
		///TODO: Display the records from file containing value in the the indicated field
}
