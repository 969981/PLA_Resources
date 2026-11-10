/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030e040; name: FUN_0030e040
 */


byte * FUN_0030e040(ulong param_1,undefined8 *param_2,byte *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_68 [8];
  undefined8 local_60 [6];
  
  uVar7 = param_1 >> 3;
  if ((int)uVar7 == 0) goto switchD_0030e088_default;
  switch(param_1 & 7) {
  case 0:
    bVar3 = *param_3;
    if ((char)bVar3 < '\0') {
      iVar1 = (uint)bVar3 + (uint)param_3[1] * 0x80 + -0x80;
      if ((char)param_3[1] < '\0') {
        auVar10 = FUN_003230f0(param_3,iVar1);
        if (auVar10._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      else {
        auVar10._8_4_ = iVar1;
        auVar10._0_8_ = param_3 + 2;
        auVar10._12_4_ = 0;
      }
    }
    else {
      auVar10[8] = bVar3;
      auVar10._0_8_ = param_3 + 1;
      auVar10._9_7_ = 0;
    }
    pbVar5 = auVar10._0_8_;
    FUN_0030d5b0(*param_2,uVar7 & 0xffffffff,auVar10._8_8_);
    break;
  case 1:
    pbVar5 = param_3 + 8;
    FUN_0030d7b0(*param_2,uVar7 & 0xffffffff,*(undefined8 *)param_3);
    break;
  case 2:
    uVar4 = FUN_0030d8b4(*param_2,uVar7 & 0xffffffff);
    if ((char)*param_3 < '\0') {
      auVar9 = FUN_003232c0(param_3);
      if (auVar9._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
      auVar9[8] = *param_3;
      auVar9._0_8_ = param_3 + 1;
      auVar9._9_7_ = 0;
    }
    lVar6 = auVar9._0_8_;
    lVar8 = (long)auVar9._8_4_;
    if ((*(long *)(param_4 + 8) - lVar6) + 0x10 < lVar8) {
      pbVar5 = (byte *)FUN_00322ab0(param_4,lVar6,auVar9._8_8_ & 0xffffffff,uVar4);
    }
    else {
      FUN_00291910(uVar4,lVar6,lVar8);
      pbVar5 = (byte *)(lVar6 + lVar8);
    }
    break;
  case 3:
    local_60[0] = FUN_0030d9d0(*param_2,uVar7 & 0xffffffff);
    iVar1 = *(int *)(param_4 + 0x58);
    *(int *)(param_4 + 0x58) = iVar1 + -1;
    if (0 < iVar1) {
      *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + 1;
      pbVar5 = (byte *)FUN_0030df30(local_60,param_3,param_4);
      *(int *)(param_4 + 0x58) = *(int *)(param_4 + 0x58) + 1;
      *(int *)(param_4 + 0x5c) = *(int *)(param_4 + 0x5c) + -1;
      uVar2 = *(uint *)(param_4 + 0x50);
      *(undefined4 *)(param_4 + 0x50) = 0;
      if (uVar2 == ((uint)param_1 & 0xfffffff8 | 3)) {
        return pbVar5;
      }
    }
  default:
switchD_0030e088_default:
    pbVar5 = (byte *)0x0;
    break;
  case 4:
    FUN_0030f640(local_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/parse_context.h"
                 ,0x2b6);
                    /* try { // try from 0030e0b4 to 0030e0c7 has its CatchHandler @ 0030e250 */
    uVar4 = FUN_0030f3ac(local_60,"Can\'t happen");
                    /* try { // try from 0030e0c8 to 0030e0cf has its CatchHandler @ 0030e24c */
    FUN_0030f41c(auStack_68,uVar4);
    FUN_0030f658(local_60);
    pbVar5 = param_3;
    break;
  case 5:
    FUN_0030d6ac(*param_2,uVar7 & 0xffffffff,*(undefined4 *)param_3);
    pbVar5 = param_3 + 4;
  }
  return pbVar5;
}


