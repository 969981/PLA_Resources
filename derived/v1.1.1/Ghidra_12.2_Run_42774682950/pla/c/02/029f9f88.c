/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029f9f88; name: FUN_029f9f88
 */


void FUN_029f9f88(long param_1,long param_2,undefined4 param_3)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 local_89;
  ulong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 uStack_74;
  undefined2 uStack_73;
  undefined1 uStack_71;
  undefined7 local_70;
  undefined1 uStack_69;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined1 auStack_40 [16];
  
  if (*(short *)(param_2 + 0x74) == 0) {
    return;
  }
  FUN_029fa56c();
  switch(param_3) {
  case 10:
    FUN_029fa848(param_1,param_2);
    return;
  case 0x14:
    FUN_029fa604(param_1,param_2);
    return;
  case 0x16:
    if (*(short *)(param_2 + 0x74) != 0) {
      uVar5 = (uint)*(undefined8 *)(param_2 + 0x140);
      uVar7 = uVar5 & 7;
      if ((uVar7 == 4) || (uVar7 == 2)) {
        uVar7 = uVar5 >> 8 & 0x3f;
      }
      else {
        uVar7 = 0;
      }
      iVar3 = uVar7 - *(byte *)(param_2 + 0x24e);
      if (0 < iVar3) {
        local_70 = 0;
        uStack_69 = 0;
        local_80 = 0;
        local_78 = 0;
        uStack_74 = 0;
        uStack_73 = 0;
        uStack_71 = 0;
        uStack_8c = 0x14;
        uStack_8b = 0x201;
        local_89 = 1;
        local_90 = (ushort)*(byte *)(param_2 + 0x7d);
        local_88 = CONCAT44(iVar3,(uint)*(byte *)(param_2 + 0x7d)) & 0xffffffffff;
        FUN_029e54ac(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xde0),auStack_40,&local_90);
      }
    }
    break;
  case 0x17:
    if (*(short *)(param_2 + 0x74) == *(short *)(param_2 + 0x72)) {
      return;
    }
    uVar1 = *(undefined1 *)(param_2 + 0x7d);
    local_80 = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    local_70 = 0;
    uStack_69 = 0;
    local_68 = 0;
    uStack_66 = 0;
    local_8d = 0x1f;
    uStack_8c = 0;
    local_8e = uVar1;
    uVar4 = FUN_029506a8(param_2,0xe);
    local_90 = (ushort)(uVar4 >> 4);
    if ((uint)uVar4 < 0x10) {
      local_90 = 1;
    }
    uVar6 = 0xf2;
    goto LAB_029fa11c;
  case 0x19:
    uVar4 = *(ulong *)(param_2 + 0x158);
    switch((uint)uVar4 & 7) {
    case 1:
    case 2:
    case 3:
      uVar7 = (uint)(uVar4 >> 0xe);
      bVar2 = *(byte *)(param_2 + 0x368);
      break;
    case 4:
      uVar7 = (uint)(uVar4 >> 0x14);
      bVar2 = *(byte *)(param_2 + 0x368);
      break;
    default:
      uVar7 = 0;
      bVar2 = *(byte *)(param_2 + 0x368);
    }
    uVar4 = (ulong)bVar2;
    if (uVar4 != 0) {
      pcVar8 = (char *)(param_2 + 0x304);
      do {
        if (*(uint *)(pcVar8 + -4) == (uVar7 & 0xffff)) {
          if (*pcVar8 != '\0') {
            return;
          }
          break;
        }
        pcVar8 = pcVar8 + 0x1c;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    local_78 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    local_70 = 0x1000000000000;
    local_80 = 0;
    uStack_48 = 0;
    local_44 = 0;
    local_90 = CONCAT11(local_90._1_1_,*(byte *)(param_2 + 0x7d));
    local_88 = (ulong)*(byte *)(param_2 + 0x7d);
    uStack_8c = 0x19;
    uStack_8b = 0;
    local_89 = 0;
    local_68 = 0;
    uStack_66 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_58 = 0;
    local_54 = 0;
    uStack_50 = 0;
    local_4c = 0;
    FUN_029da128(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb40),auStack_40,&local_90);
    break;
  case 0x26:
    if (*(short *)(param_2 + 0x74) == 0) {
      return;
    }
    if (*(short *)(param_2 + 0x74) == *(short *)(param_2 + 0x72)) {
      return;
    }
    uVar1 = *(undefined1 *)(param_2 + 0x7d);
    local_80 = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    local_70 = 0;
    uStack_69 = 0;
    local_68 = 0;
    uStack_66 = 0;
    local_8d = 0x1f;
    uStack_8c = 0;
    local_8e = uVar1;
    uVar4 = FUN_029506a8(param_2,0xe);
    local_90 = (ushort)(uVar4 >> 4);
    if ((uint)uVar4 < 0x10) {
      local_90 = 1;
    }
    uVar6 = 0xc9;
LAB_029fa11c:
    local_88 = (ulong)(CONCAT14(uVar1,uVar6) | 0x820000);
    FUN_029e34cc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xc00),auStack_40,&local_90);
    break;
  case 0x2d:
    if ((*(short *)(param_2 + 0x74) != 0) && ('\0' < *(char *)(param_2 + 0x2e5))) {
      local_8e = *(undefined1 *)(param_2 + 0x7d);
      local_68 = 1;
      local_90 = CONCAT11(1,(byte)((uint)*(undefined8 *)(param_2 + 0x1f8) >> 3) & 0x1f);
      local_78 = 0;
      uStack_74 = 0;
      local_8d = 0;
      uStack_8c = 0;
      uStack_8b = 0;
      local_89 = 0;
      local_70 = 0;
      uStack_69 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      local_5c = 0;
      uStack_58 = 0;
      local_54 = 0;
      uStack_50 = 0;
      local_4c = 0;
      uStack_48 = 0;
      local_44 = 0;
      local_88 = CONCAT35(local_88._5_3_,0xff00000002);
      local_80 = (ulong)CONCAT15(local_80._5_1_,0x600000000);
      FUN_029e5e44(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xe80),auStack_40,&local_90);
    }
  }
  return;
}


