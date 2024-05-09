#include <stdio.h>
#include <stdint.h>

void decodeSingleRegMov(uint16_t input_bits, char* output_asm)
{
	printf("HELLO, int: %d, bits: %b", input_bits, input_bits);
}

int main(int argc, char *argv[])
{
	// Read assembled file, use argv
	if (argc != 2) {
		fprintf(stderr, "./single_reg_mov <binary assemebled file>");
		return -1;
	}

	const char* filename = argv[1];
	FILE* fp = fopen(filename, "r");
	if (fp == NULL) {
		fprintf(stderr, "Unable to open file: %s", filename);
		return -1;
	}

	char asm_instructions[20];
	decodeSingleRegMov(15, asm_instructions);

	fclose(fp);

	return 0;
}
