#include "ServerboundPaddleBoatPacket.h"

#include "java/io/DataInputStream.h"
#include "java/io/DataOutputStream.h"
#include "net/minecraft/network/PacketListener.h"

std::shared_ptr<Packet> ServerboundPaddleBoatPacket::create() {
    return std::shared_ptr<Packet>(new ServerboundPaddleBoatPacket());
}

ServerboundPaddleBoatPacket::ServerboundPaddleBoatPacket() {}

EPacketType ServerboundPaddleBoatPacket::getPacketId() {
    return EPacketType::_ServerboundPaddleBoatPacket;
}

void ServerboundPaddleBoatPacket::read(DataInputStream* input) {
    left = input->readBoolean();
    right = input->readBoolean();
}

void ServerboundPaddleBoatPacket::write(DataOutputStream* output) {
    output->writeBoolean(left);
    output->writeBoolean(right);
}

void ServerboundPaddleBoatPacket::handle(PacketListener* listener) {
    listener->handlePaddleBoat(shared_from_this());
}

bool ServerboundPaddleBoatPacket::getLeft() {
    return left;
}

bool ServerboundPaddleBoatPacket::getRight() {
    return right;
}
