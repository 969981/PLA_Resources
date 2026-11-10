/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02947e24; name: FUN_02947e24
 */


int FUN_02947e24(long param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  
  iVar1 = *(int *)(param_1 + 0x110);
  uVar6 = (uint)*(byte *)(*(long *)(param_1 + 0x58) + 0x55);
  if (iVar1 == 2) {
    if (5 < param_2) {
      return 0;
    }
    puVar7 = (undefined4 *)&DAT_03a7ebc8;
  }
  else if (iVar1 == 1) {
    if (5 < param_2) {
      return 0;
    }
    if (uVar6 - 1 < 5) {
      puVar7 = (undefined4 *)(&PTR_DAT_042767f8)[(char)(uVar6 - 1)];
    }
    else {
      puVar7 = &DAT_03a7eb68;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    if (5 < param_2) {
      return 0;
    }
    puVar7 = (undefined4 *)&DAT_03a7eb50;
  }
  iVar3 = 0;
  if ((param_2 != 0) && (uVar8 = (ulong)param_2, *(byte *)(puVar7 + uVar8) != 5)) {
    iVar3 = 0;
    do {
      bVar2 = param_2 - 1;
      if (iVar1 == 2) {
        uVar4 = 5;
        if (bVar2 < 6) {
          uVar4 = *(uint *)(&DAT_03a7ebc8 + (ulong)bVar2 * 4);
        }
      }
      else if (iVar1 == 1) {
        uVar4 = 5;
        if (bVar2 < 6) {
          uVar5 = (ulong)bVar2;
          if (uVar6 - 1 < 3) {
            uVar4 = (&DAT_03a7eb80)[uVar5];
          }
          else if (uVar6 == 4) {
            uVar4 = *(uint *)(&DAT_03a7eb98 + uVar5 * 4);
          }
          else if (uVar6 == 5) {
            uVar4 = *(uint *)(&DAT_03a7ebb0 + uVar5 * 4);
          }
          else {
            uVar4 = (&DAT_03a7eb68)[uVar5];
          }
        }
      }
      else {
        uVar4 = 5;
        if ((iVar1 == 0) && (uVar4 = 5, bVar2 < 6)) {
          uVar4 = *(uint *)(&DAT_03a7eb50 + (ulong)bVar2 * 4);
        }
      }
      if (uVar4 == *(byte *)(puVar7 + uVar8)) {
        iVar3 = iVar3 + 1;
      }
      param_2 = param_2 - 1;
    } while (bVar2 != 0);
  }
  return iVar3;
}


