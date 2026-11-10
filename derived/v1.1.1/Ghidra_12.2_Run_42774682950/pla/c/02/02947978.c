/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02947978; name: FUN_02947978
 */


bool FUN_02947978(long param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  if (5 < param_2) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x110);
  bVar2 = *(byte *)(*(long *)(param_1 + 0x58) + 0x55);
  uVar5 = (uint)bVar2;
  if (iVar1 == 0) {
    puVar10 = (undefined4 *)&DAT_03a7eb50;
  }
  else if (iVar1 == 2) {
    puVar10 = (undefined4 *)&DAT_03a7ebc8;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    if (uVar5 - 1 < 5) {
      puVar10 = (undefined4 *)(&PTR_DAT_042767f8)[(char)(uVar5 - 1)];
    }
    else {
      puVar10 = &DAT_03a7eb68;
    }
  }
  bVar3 = *(byte *)(puVar10 + param_2);
  if ((param_2 == 0) || (bVar3 == 5)) {
    if (bVar3 == 5) {
      return false;
    }
    uVar11 = 0;
    if (iVar1 != 2) goto LAB_02947b20;
LAB_02947b3c:
    if (bVar3 < 5) {
      puVar9 = &DAT_03a7ebe0;
LAB_02947b68:
      uVar6 = puVar9[bVar3];
      goto LAB_02947b6c;
    }
  }
  else {
    uVar11 = 0;
    do {
      bVar4 = param_2 - 1;
      if (iVar1 == 2) {
        uVar7 = 5;
        if (bVar4 < 6) {
          uVar7 = *(uint *)(&DAT_03a7ebc8 + (ulong)bVar4 * 4);
        }
      }
      else if (iVar1 == 1) {
        uVar7 = 5;
        if (bVar4 < 6) {
          uVar8 = (ulong)bVar4;
          if (uVar5 - 1 < 3) {
            uVar7 = (&DAT_03a7eb80)[uVar8];
          }
          else if (uVar5 == 4) {
            uVar7 = *(uint *)(&DAT_03a7eb98 + uVar8 * 4);
          }
          else if (uVar5 == 5) {
            uVar7 = *(uint *)(&DAT_03a7ebb0 + uVar8 * 4);
          }
          else {
            uVar7 = (&DAT_03a7eb68)[uVar8];
          }
        }
      }
      else {
        uVar7 = 5;
        if ((iVar1 == 0) && (uVar7 = 5, bVar4 < 6)) {
          uVar7 = *(uint *)(&DAT_03a7eb50 + (ulong)bVar4 * 4);
        }
      }
      if (uVar7 == bVar3) {
        uVar11 = uVar11 + 1;
      }
      param_2 = param_2 - 1;
    } while (bVar4 != 0);
    uVar11 = uVar11 & 0xff;
    if (iVar1 == 2) goto LAB_02947b3c;
LAB_02947b20:
    if (iVar1 == 1) {
      if (4 < bVar3) goto LAB_02947b58;
      puVar9 = &DAT_03a7ebe5;
      goto LAB_02947b68;
    }
    if (iVar1 == 0) goto LAB_02947b3c;
  }
LAB_02947b58:
  uVar6 = 2;
LAB_02947b6c:
  uVar5 = FUN_0294e9bc(iVar1,bVar2,uVar6);
  return uVar11 < uVar5;
}


