#include <stdio.h>
#include <stdint.h>
void databuffer (uint8_t cmd, uint16_t value, uint8_t status, uint32_t checksum) {
	int i = 0;
	int len = 8;
	uint8_t buff[10];

	buff[0] = 0xA5;
	buff[1] = cmd;
	buff[2] = (value & 0xff);
	buff[3] = (value >> len) & 0xFF;
	buff[4] = (status & 0xFF);
	buff[5] = (checksum >> len) & 0xFF;
	buff[6] = (checksum >>len*2) & 0xFF;
	buff[7] = (checksum >> len*3) & 0xFF;
	buff[8] = (checksum >> len*4) & 0xFF;
	buff[9] = 0x5A;

	for(i ; i < 10 ; i++) {
		printf("%u ", buff[i]);
	}

	printf("\n");
}

	
int main()
{
	uint8_t cmd;
	uint16_t value;
	uint8_t status;
	uint32_t checksum;

	scanf("%hhu %hu %hhu %u", &cmd, &value, &status, &checksum);
	
	databuffer (cmd, value, status, checksum);

}
