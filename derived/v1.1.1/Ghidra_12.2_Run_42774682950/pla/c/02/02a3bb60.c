/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3bb60; name: FUN_02a3bb60
 */


void FUN_02a3bb60(long param_1,long param_2,uint param_3,uint param_4,byte param_5,ushort param_6,
                 uint param_7,char param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar12 = (ulong)*(byte *)(param_2 + 0x7d);
  if (param_3 == 9) {
    if ((int)param_4 < 1) {
      return;
    }
    lVar4 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x10) + 8) + uVar12 * 8 +
                     0x120);
    uVar6 = (uint)*(byte *)(lVar4 + 0x36b);
    if ((param_4 & 0xff) == 0) {
      if (uVar6 != 0) goto LAB_02a3bc5c;
    }
    else if (uVar6 < 3) {
      uVar8 = (undefined1)(uVar6 + param_4);
      if (2 < (uVar6 + param_4 & 0xff)) {
        uVar8 = 3;
      }
      *(undefined1 *)(lVar4 + 0x36b) = uVar8;
LAB_02a3bc5c:
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x12,uVar12,param_4 & 0xff);
    }
    if (param_8 != '\x02') {
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x75,uVar12,9,param_4 & 0xff);
    }
    if ((param_7 & 1) == 0) {
      return;
    }
    uVar12 = (ulong)*(byte *)(param_2 + 0x7d);
    uVar3 = 0x150;
    goto LAB_02a3bca4;
  }
  if ((int)param_4 < 1) {
    uVar6 = param_3 - 1;
    switch(uVar6) {
    case 0:
    case 2:
      pcVar7 = (char *)(param_2 + 0x2e4);
      pbVar5 = (byte *)(param_2 + 0x2e7);
      break;
    case 1:
    case 3:
      pcVar7 = (char *)(param_2 + 0x2e5);
      pbVar5 = (byte *)(param_2 + 0x2e8);
      break;
    case 4:
    case 5:
    case 6:
      pcVar7 = (char *)(param_2 + 0x2e6);
      pbVar5 = (byte *)(param_2 + 0x2e9);
      break;
    default:
      uVar9 = 0;
      goto LAB_02a3be60;
    }
    if (*pcVar7 < '\x01') {
      uVar9 = 0;
LAB_02a3bd7c:
      if ((int)(char)*pbVar5 < (int)(uint)param_5) {
        *pbVar5 = param_5;
      }
    }
    else {
      uVar11 = (uint)*pcVar7;
      uVar9 = uVar11;
      if ((int)(-param_4 & 0xff) <= (int)uVar11) {
        uVar9 = -param_4;
      }
      *pcVar7 = (char)(uVar11 - uVar9);
      if ((uVar11 - uVar9 & 0xff) != 1) goto LAB_02a3bd7c;
      *pbVar5 = 0;
    }
LAB_02a3be60:
    uVar9 = uVar9 & 0xff;
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0xd,uVar12,param_3 & 0xff,uVar9,param_5);
    if (param_8 != '\x02') {
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x76,uVar12,param_3 & 0xff,uVar9);
    }
    if ((param_7 & 1) == 0) {
      return;
    }
    if (6 < uVar6) {
      return;
    }
    puVar1 = &UNK_03a80cac;
    if (uVar9 < 3) {
      puVar1 = &DAT_03a80ca4;
    }
    if (uVar9 == 2) {
      puVar1 = &DAT_03a80ca8;
    }
    uVar3 = *(undefined4 *)(puVar1 + (ulong)uVar6 * 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    goto LAB_02a3bef0;
  }
  uVar6 = param_3 - 1;
  switch(uVar6) {
  case 0:
  case 2:
    pcVar7 = (char *)(param_2 + 0x2e4);
    pbVar5 = (byte *)(param_2 + 0x2e7);
    break;
  case 1:
  case 3:
    pcVar7 = (char *)(param_2 + 0x2e5);
    pbVar5 = (byte *)(param_2 + 0x2e8);
    break;
  case 4:
  case 5:
  case 6:
    pcVar7 = (char *)(param_2 + 0x2e6);
    pbVar5 = (byte *)(param_2 + 0x2e9);
    break;
  default:
    uVar9 = 0;
    goto LAB_02a3bd94;
  }
  if (*pcVar7 < '\x02') {
    iVar10 = (int)*pcVar7;
    uVar9 = 2 - iVar10;
    if ((int)(iVar10 + (param_4 & 0xff)) < 3) {
      uVar9 = param_4;
    }
    *pcVar7 = (char)(uVar9 + iVar10);
    if ((uVar9 + iVar10 & 0xff) != 1) goto LAB_02a3bd1c;
    *pbVar5 = 0;
  }
  else {
    uVar9 = 0;
LAB_02a3bd1c:
    if ((int)(char)*pbVar5 < (int)(uint)param_5) {
      *pbVar5 = param_5;
    }
  }
LAB_02a3bd94:
  uVar9 = uVar9 & 0xff;
  FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0xc,uVar12,param_3 & 0xff,uVar9,param_5);
  if (param_8 != '\x02') {
    FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0x75,uVar12,param_3 & 0xff,uVar9);
  }
  if ((param_7 & 1) != 0) {
    if (param_6 == 0) {
      if (uVar6 < 7) {
        if (uVar9 == 2) {
          puVar1 = &DAT_03a80bc8;
        }
        else {
          puVar1 = &DAT_03a80bcc;
          if (uVar9 < 3) {
            puVar1 = &DAT_03a80bc4;
          }
        }
        uVar3 = *(undefined4 *)(puVar1 + (ulong)uVar6 * 0x10);
LAB_02a3bca4:
        FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,uVar3,uVar12,0xffff0000);
        return;
      }
    }
    else if (uVar6 < 7) {
      if (uVar9 == 2) {
        puVar1 = &DAT_03a80c38;
      }
      else {
        puVar1 = &DAT_03a80c3c;
        if (uVar9 < 3) {
          puVar1 = &DAT_03a80c34;
        }
      }
      uVar3 = *(undefined4 *)(puVar1 + (ulong)uVar6 * 0x10);
      param_3 = (uint)param_6;
      uVar2 = *(undefined8 *)(param_1 + 0x18);
LAB_02a3bef0:
      FUN_02a3fa08(uVar2,0x9d,uVar3,uVar12,param_3,0xffff0000);
      return;
    }
  }
  return;
}


