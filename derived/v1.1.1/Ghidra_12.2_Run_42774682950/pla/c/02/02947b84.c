/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02947b84; name: FUN_02947b84
 */


void FUN_02947b84(long param_1,byte param_2,undefined1 *param_3,char *param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  char cVar7;
  undefined4 *puVar8;
  
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 == 2) {
    if (5 < param_2) goto LAB_02947bd8;
    puVar8 = (undefined4 *)&DAT_03a7ebc8;
  }
  else if (iVar1 == 1) {
    if (5 < param_2) goto LAB_02947bd8;
    uVar2 = *(byte *)(*(long *)(param_1 + 0x58) + 0x55) - 1;
    if (uVar2 < 5) {
      puVar8 = (undefined4 *)(&PTR_DAT_042767f8)[(char)uVar2];
    }
    else {
      puVar8 = &DAT_03a7eb68;
    }
  }
  else {
    if ((iVar1 != 0) || (5 < param_2)) {
LAB_02947bd8:
      *param_3 = 5;
      *param_4 = '\0';
      return;
    }
    puVar8 = (undefined4 *)&DAT_03a7eb50;
  }
  uVar2 = puVar8[param_2];
  cVar7 = '\0';
  *param_3 = (char)uVar2;
  if ((param_2 != 0) && (uVar2 = uVar2 & 0xff, uVar2 != 5)) {
    cVar7 = '\0';
    iVar1 = *(int *)(param_1 + 0x110);
    bVar3 = *(byte *)(*(long *)(param_1 + 0x58) + 0x55);
    do {
      bVar4 = param_2 - 1;
      if (iVar1 == 2) {
        uVar5 = 5;
        if (bVar4 < 6) {
          uVar5 = *(uint *)(&DAT_03a7ebc8 + (ulong)bVar4 * 4);
        }
      }
      else if (iVar1 == 1) {
        uVar5 = 5;
        if (bVar4 < 6) {
          uVar6 = (ulong)bVar4;
          if (bVar3 - 1 < 3) {
            uVar5 = (&DAT_03a7eb80)[uVar6];
          }
          else if (bVar3 == 4) {
            uVar5 = *(uint *)(&DAT_03a7eb98 + uVar6 * 4);
          }
          else if (bVar3 == 5) {
            uVar5 = *(uint *)(&DAT_03a7ebb0 + uVar6 * 4);
          }
          else {
            uVar5 = (&DAT_03a7eb68)[uVar6];
          }
        }
      }
      else {
        uVar5 = 5;
        if ((iVar1 == 0) && (uVar5 = 5, bVar4 < 6)) {
          uVar5 = *(uint *)(&DAT_03a7eb50 + (ulong)bVar4 * 4);
        }
      }
      if (uVar5 == uVar2) {
        cVar7 = cVar7 + '\x01';
      }
      param_2 = param_2 - 1;
    } while (bVar4 != 0);
  }
  *param_4 = cVar7;
  return;
}


