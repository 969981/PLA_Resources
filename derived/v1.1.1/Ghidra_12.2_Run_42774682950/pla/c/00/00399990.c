/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00399990; name: FUN_00399990
 */


ulong FUN_00399990(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  uVar1 = FUN_0031aab8(param_2);
  switch(uVar1) {
  case 1:
    iVar2 = FUN_0031bff4(param_2);
    return (long)iVar2;
  case 2:
    uVar4 = FUN_0031bf0c(param_2);
    return uVar4;
  case 3:
    uVar4 = FUN_0031c1c4(param_2);
    return uVar4 & 0xffffffff;
  case 4:
    uVar4 = FUN_0031c0dc(param_2);
    return uVar4;
  case 5:
  case 6:
  case 8:
  case 10:
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x328);
                    /* try { // try from 003999e0 to 003999f3 has its CatchHandler @ 00399b08 */
    uVar3 = FUN_0030f3ac(auStack_40,"Unsupported");
                    /* try { // try from 003999f4 to 003999fb has its CatchHandler @ 00399b04 */
    FUN_0030f41c(auStack_48,uVar3);
    FUN_0030f658(auStack_40);
  default:
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/map_field.h"
                 ,0x337);
                    /* try { // try from 00399a1c to 00399a2f has its CatchHandler @ 00399b10 */
    uVar3 = FUN_0030f3ac(auStack_40,"Can\'t get here.");
                    /* try { // try from 00399a30 to 00399a37 has its CatchHandler @ 00399b0c */
    FUN_0030f41c(auStack_48,uVar3);
    FUN_0030f658(auStack_40);
    uVar4 = 0;
    break;
  case 7:
    uVar4 = FUN_0031c2ac(param_2);
    return uVar4 & 1;
  case 9:
    pbVar5 = (byte *)FUN_0031be24(param_2);
    pbVar7 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar7 = pbVar5 + 1;
    }
    bVar6 = *pbVar7;
    if (bVar6 == 0) {
      return 0;
    }
    uVar4 = 0;
    do {
      pbVar7 = pbVar7 + 1;
      uVar4 = uVar4 * 5 + (ulong)bVar6;
      bVar6 = *pbVar7;
    } while (bVar6 != 0);
  }
  return uVar4;
}


