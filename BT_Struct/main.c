#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*tinh size theo size cua kieu du lieu lon nhat: 4 byte*/
struct Packet
{
    uint32_t CRC        :2;
    uint32_t Status     :1;
    uint32_t Payload    :12;
    uint32_t Bat        :3;
    uint32_t Sensor     :3;
    uint32_t Long_addr  :8;
    uint32_t Short_addr :2;
    uint32_t Addr_mode  :1;
};
void Input_Packet(struct Packet *InputPacket, int PacketValue);
void Output_Packet(struct Packet *OutputPacket);
int Packet1_Value;

int main()
{
    struct Packet packet1;
    printf("nhap gia tri packet 1:");
    scanf("%x", &Packet1_Value);
    printf("%x\n", Packet1_Value);
    Input_Packet(&packet1, Packet1_Value);
    Output_Packet(&packet1);
    printf("size of struct Packet = %d", sizeof(packet1));
}

void Input_Packet(struct Packet *InputPacket, int PacketValue)
{
    InputPacket->CRC = (uint8_t) (PacketValue&0x03);
    InputPacket->Status = (uint8_t) ((PacketValue>>2) & 0x01);
    InputPacket->Payload = (uint16_t) ((PacketValue>>3) & 0xfff);
    InputPacket->Bat = (uint8_t) (PacketValue>>15 & 0x07);
    InputPacket->Sensor = (uint8_t) ((PacketValue>>18) & 0x07);
    InputPacket->Long_addr = (uint8_t) ((PacketValue>>21) & 0xff);
    InputPacket->Short_addr = (uint8_t) ((PacketValue>>29) & 0x03);
    InputPacket->Addr_mode = (uint8_t) ((PacketValue>>31) & 0x01);
}

void Output_Packet(struct Packet *OutputPacket)
{

    printf("CRC = %x\n",OutputPacket->CRC);
    printf("%x\n",OutputPacket->Status);
    printf("%x\n",OutputPacket->Payload);
    printf("%x\n",OutputPacket->Bat);
    printf("%x\n",OutputPacket->Sensor);
    printf("%x\n",OutputPacket->Long_addr);
    printf("%x\n",OutputPacket->Short_addr);
    printf("Addr_mode = %x\n",OutputPacket->Addr_mode);
}
