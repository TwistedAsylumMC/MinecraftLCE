#include "net/minecraft/network/PacketListener.h"

#include "net/minecraft/network/protocol/game/ClientboundAddExperienceOrbPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundAddGlobalEntityPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundAnimatePacket.h"
#include "net/minecraft/network/protocol/game/ClientboundBlockDestructionPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundContainerAckPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundContainerClosePacket.h"
#include "net/minecraft/network/protocol/game/ClientboundContainerSetDataPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundDamageIndicatorPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundEntityEventPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundKeepAlivePacket.h"
#include "net/minecraft/network/protocol/game/ClientboundLevelEventPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundMoveVehiclePacket.h"
#include "net/minecraft/network/protocol/game/ClientboundOpenSignEditorPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundPlayerAbilitiesPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundPlayerSleepPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundPowerupPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundRotateHeadPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundSetCameraPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundSetCarriedItemPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundSetExperiencePacket.h"
#include "net/minecraft/network/protocol/game/ClientboundSetHealthPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundSetSpawnPositionPacket.h"
#include "net/minecraft/network/protocol/game/ClientboundSetTimePacket.h"
#include "net/minecraft/network/protocol/game/ClientboundTakeItemEntityPacket.h"
#include "net/minecraft/network/protocol/game/DebugOptionsPacket.h"
#include "net/minecraft/network/protocol/game/DisconnectPacket.h"
#include "net/minecraft/network/protocol/game/GetInfoPacket.h"
#include "net/minecraft/network/protocol/game/KickPlayerPacket.h"
#include "net/minecraft/network/protocol/game/PlayerReadyPacket.h"
#include "net/minecraft/network/protocol/game/ServerSettingsChangedPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundAcceptTeleportationPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundChatPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundClientCommandPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundContainerAckPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundContainerButtonClickPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundContainerClosePacket.h"
#include "net/minecraft/network/protocol/game/ServerboundInteractPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundKeepAlivePacket.h"
#include "net/minecraft/network/protocol/game/ServerboundMovePlayerPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundMoveVehiclePacket.h"
#include "net/minecraft/network/protocol/game/ServerboundPaddleBoatPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundPlayerActionPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundPlayerCommandPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundPlayerInputPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundResourcePackPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundSetCarriedItemPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundSwingPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundUseItemOnPacket.h"
#include "net/minecraft/network/protocol/game/ServerboundUseItemPacket.h"
#include "net/minecraft/network/protocol/game/TradeItemPacket.h"
#include "net/minecraft/network/protocol/game/UpdateProgressPacket.h"
#include "net/minecraft/network/protocol/game/VotePacket.h"
#include "net/minecraft/network/protocol/game/XZPacket.h"

// HANDLE_IMPL(AcceptedLogin, ClientboundLoginPacket)
HANDLE_IMPL(GetInfo, GetInfoPacket)
// HANDLE_IMPL(AddEntity, ClientboundAddEntityPacket)
HANDLE_IMPL(AddExperienceOrb, ClientboundAddExperienceOrbPacket)
HANDLE_IMPL(AddGlobalEntity, ClientboundAddGlobalEntityPacket)
// HANDLE_IMPL(AddMob, ClientboundAddMobPacket)
// HANDLE_IMPL(AddPainting, ClientboundAddPaintingPacket)
// HANDLE_IMPL(AddPlayer, ClientboundAddPlayerPacket)
HANDLE_IMPL(Animate, ClientboundAnimatePacket)
// HANDLE_IMPL(AwardStat, ClientboundAwardStatPacket)
HANDLE_IMPL(BlockDestruction, ClientboundBlockDestructionPacket)
// HANDLE_IMPL(BlockCollectionDestruction, ClientboundBlockCollectionDestructionPacket)
HANDLE_IMPL(OpenSignEditor, ClientboundOpenSignEditorPacket)
// HANDLE_IMPL(BlockEntityData, ClientboundBlockEntityDataPacket)
// HANDLE_IMPL(BlockEvent, ClientboundBlockEventPacket)
// HANDLE_IMPL(BlockUpdate, ClientboundBlockUpdatePacket)
// HANDLE_IMPL(BlockRegionUpdate, BlockRegionUpdatePacket)
// HANDLE_IMPL(Chat, ClientboundChatPacket)
// HANDLE_IMPL(ChatAutoComplete, ClientboundChatAutoCompletePacket)
// HANDLE_IMPL(ChunkBlocksUpdate, ClientboundChunkBlocksUpdatePacket)
// HANDLE_IMPL(ChunkVisibility, ChunkVisibilityPacket)
// HANDLE_IMPL(ChunkVisibilityArea, ChunkVisibilityAreaPacket)
// HANDLE_IMPL(MapItemData, ClientboundMapItemDataPacket)
HANDLE_IMPL(ContainerAck, ClientboundContainerAckPacket)
HANDLE_IMPL(ContainerClose, ClientboundContainerClosePacket)
// HANDLE_IMPL(ContainerContent, ClientboundContainerSetContentPacket)
// HANDLE_IMPL(ContainerOpen, ClientboundContainerOpenPacket)
HANDLE_IMPL(ContainerSetData, ClientboundContainerSetDataPacket)
// HANDLE_IMPL(ContainerSetSlot, ClientboundContainerSetSlotPacket)
// HANDLE_IMPL(CustomPayload, ClientboundCustomPayloadPacket)
HANDLE_IMPL(Disconnect, DisconnectPacket)
HANDLE_IMPL(EntityActionAtPosition, ClientboundPlayerSleepPacket)
HANDLE_IMPL(EntityEvent, ClientboundEntityEventPacket)
// HANDLE_IMPL(EntityLinkPacket, ClientboundSetEntityLinkPacket)
// HANDLE_IMPL(SetEntityPassengersPacket, ClientboundSetPassengersPacket)
// HANDLE_IMPL(Explosion, ClientboundExplodePacket)
// HANDLE_IMPL(GameEvent, ClientboundGameEventPacket)
HANDLE_IMPL(KeepAlive, ClientboundKeepAlivePacket)
HANDLE_IMPL(LevelEvent, ClientboundLevelEventPacket)
// HANDLE_IMPL(Login, ClientboundLoginPacket)
// HANDLE_IMPL(MoveEntity, ClientboundMoveEntityPacket)
// HANDLE_IMPL(MoveEntitySmall, MoveEntityPacketSmall)
// HANDLE_IMPL(MovePlayer, ClientboundPlayerPositionPacket)
// HANDLE_IMPL(ParticleEvent, ClientboundLevelParticlesPacket)
HANDLE_IMPL(PlayerAbilities, ClientboundPlayerAbilitiesPacket)
// HANDLE_IMPL(PlayerInfo, PlayerInfoPacket)
// HANDLE_IMPL(PreLogin, ClientboundPreLoginPacket)
// HANDLE_IMPL(RemoveEntity, ClientboundRemoveEntitiesPacket)
// HANDLE_IMPL(RemoveMobEffect, ClientboundRemoveMobEffectPacket)
// HANDLE_IMPL(Respawn, ClientboundRespawnPacket)
HANDLE_IMPL(RotateMob, ClientboundRotateHeadPacket)
HANDLE_IMPL(SetCarriedItem, ClientboundSetCarriedItemPacket)
// HANDLE_IMPL(SetEntityData, ClientboundSetEntityDataPacket)
// HANDLE_IMPL(SetEntityMotion, ClientboundSetEntityMotionPacket)
// HANDLE_IMPL(SetEquippedItem, ClientboundSetEquippedItemPacket)
HANDLE_IMPL(SetExperience, ClientboundSetExperiencePacket)
HANDLE_IMPL(SetHealth, ClientboundSetHealthPacket)
// HANDLE_IMPL(SetPlayerTeamPacket, ClientboundSetPlayerTeamPacket)
HANDLE_IMPL(SetSpawn, ClientboundSetSpawnPositionPacket)
HANDLE_IMPL(SetTime, ClientboundSetTimePacket)
// HANDLE_IMPL(SoundEvent, ClientboundSoundPacket)
HANDLE_IMPL(TakeItemEntity, ClientboundTakeItemEntityPacket)
// HANDLE_IMPL(TeleportEntity, ClientboundTeleportEntityPacket)
// HANDLE_IMPL(UpdateAttributes, ClientboundUpdateAttributesPacket)
// HANDLE_IMPL(UpdateMobEffect, ClientboundUpdateMobEffectPacket)
// HANDLE_IMPL(PlayerCombat, ClientboundPlayerCombatPacket)
// HANDLE_IMPL(ChangeDifficulty, ClientboundChangeDifficultyPacket)
HANDLE_IMPL(SetCamera, ClientboundSetCameraPacket)
// HANDLE_IMPL(SetBorder, ClientboundSetBorderPacket)
// HANDLE_IMPL(SetTitles, ClientboundSetTitlesPacket)
// HANDLE_IMPL(TabListCustomisation, ClientboundTabListPacket)
// HANDLE_IMPL(ResourcePack, ClientboundResourcePackPacket)
// HANDLE_IMPL(BossUpdate, ClientboundBossEventPacket)
// HANDLE_IMPL(ItemCooldown, ClientboundCooldownPacket)
HANDLE_IMPL(MoveVehicle, ClientboundMoveVehiclePacket)
HANDLE_IMPL(ServerSettingsChanged, ServerSettingsChangedPacket)
// HANDLE_IMPL(Texture, TexturePacket)
// HANDLE_IMPL(TextureAndGeometry, TextureAndGeometryPacket)
HANDLE_IMPL(UpdateProgress, UpdateProgressPacket)
// HANDLE_IMPL(TextureChange, TextureChangePacket)
// HANDLE_IMPL(TextureAndGeometryChange, TextureAndGeometryChangePacket)
// HANDLE_IMPL(UpdateGameRuleProgressPacket, UpdateGameRuleProgressPacket)
HANDLE_IMPL(XZ, XZPacket)
// HANDLE_IMPL(ScoreboardPacket, ScoreboardPacket)
// HANDLE_IMPL(GameMode, GameModePacket)
// HANDLE_IMPL(MapSelectInfo, MapSelectInfoPacket)
HANDLE_IMPL(PlayerReady, PlayerReadyPacket)
HANDLE_IMPL(Powerup, ClientboundPowerupPacket)
HANDLE_IMPL(DamageIndicator, ClientboundDamageIndicatorPacket)
// HANDLE_IMPL(MiniGamePlayerSettingsUpdatePacket, ClientboundMGPlayerSettingsUpdatePacket)
HANDLE_IMPL(Animate, ServerboundSwingPacket)
HANDLE_IMPL(Chat, ServerboundChatPacket)
// HANDLE_IMPL(ChatAutoComplete, ServerboundChatAutoCompletePacket)
HANDLE_IMPL(ClientCommand, ServerboundClientCommandPacket)
// HANDLE_IMPL(ClientInformation, ServerboundClientInformationPacket)
HANDLE_IMPL(ContainerAck, ServerboundContainerAckPacket)
HANDLE_IMPL(ContainerButtonClick, ServerboundContainerButtonClickPacket)
// HANDLE_IMPL(ContainerClick, ServerboundContainerClickPacket)
HANDLE_IMPL(ContainerClose, ServerboundContainerClosePacket)
// HANDLE_IMPL(CustomPayload, ServerboundCustomPayloadPacket)
HANDLE_IMPL(Interact, ServerboundInteractPacket)
HANDLE_IMPL(KeepAlive, ServerboundKeepAlivePacket)
HANDLE_IMPL(MovePlayer, ServerboundMovePlayerPacket)
// HANDLE_IMPL(PlayerAbilities, ServerboundPlayerAbilitiesPacket)
HANDLE_IMPL(PlayerAction, ServerboundPlayerActionPacket)
HANDLE_IMPL(PlayerCommand, ServerboundPlayerCommandPacket)
HANDLE_IMPL(PlayerInput, ServerboundPlayerInputPacket)
// HANDLE_IMPL(PreLogin, ServerboundPreLoginPacket)
HANDLE_IMPL(SetCarriedItem, ServerboundSetCarriedItemPacket)
// HANDLE_IMPL(SetCreativeModeSlot, ServerboundSetCreativeModeSlotPacket)
// HANDLE_IMPL(SignUpdate, ServerboundSignUpdatePacket)
HANDLE_IMPL(UseItemOn, ServerboundUseItemOnPacket)
HANDLE_IMPL(UseItem, ServerboundUseItemPacket)
// HANDLE_IMPL(TeleportToEntityPacket, ServerboundTeleportToEntityPacket)
HANDLE_IMPL(ResourcePackResponse, ServerboundResourcePackPacket)
HANDLE_IMPL(PaddleBoat, ServerboundPaddleBoatPacket)
HANDLE_IMPL(MoveVehicle, ServerboundMoveVehiclePacket)
HANDLE_IMPL(AcceptTeleportPacket, ServerboundAcceptTeleportationPacket)
// HANDLE_IMPL(CraftItem, CraftItemPacket)
HANDLE_IMPL(TradeItem, TradeItemPacket)
HANDLE_IMPL(DebugOptions, DebugOptionsPacket)
HANDLE_IMPL(KickPlayer, KickPlayerPacket)
// HANDLE_IMPL(GameCommand, GameCommandPacket)
HANDLE_IMPL(Vote, VotePacket)
// HANDLE_IMPL(ClientboundSetPlayerTeamPacket, ClientboundSetPlayerTeamPacket)
